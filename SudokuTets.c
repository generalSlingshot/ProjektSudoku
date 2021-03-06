/*
========================================================================
Autor       : Team 3
Firma       : HHBKSudokuSoft AG
Dateiname   : Sudoku.c
Datum       : 23.04.2018
Beschreibung: Die Hauptdatei des Sudokuprogramms.
Compiler    : Visual Studio 2012 Compiler
Version     : 1.0
Programmschnittstelle: int main(void)
Das Programm gibt den Wert 0 oder 1 zurueck.
Das Programm erwartet beim Aufruf keine Argumente
========================================================================
*/
#define _CRT_SECURE_NO_DEPRECATE 1

/*
========================================================================
Include Dateien
========================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sqlite3.h"

/*
========================================================================
Defines
========================================================================
*/
#define LEICHT 1
#define MITTEL 2
#define SCHWER 3

#define SUDOKU_WIN 1
#define SUDOKU_LOSE 0

#define HAUPTMENUE_SPIEL 1
#define HAUPTMENUE_REGEL 2
#define HAUPTMENUE_LISTE 3
#define HAUPTMENUE_LOGOUT 4
#define HAUPTMENUE_END 0

#define STARTMENUE_LOGIN 1
#define STARTMENUE_REGISTER 2
#define STARTMENUE_END 0

#define NAME_MAX 20
#define NAME_MIN 5
#define PASSWORT_MAX 20
#define PASSWORT_MIN 5

#define TRUE 1
#define FALSE 0

#define NICHT_GESETZT -1
#define ZEIT_MAX 8

#define BESTENLISTE_ANZAHL 3
#define BESTENLISTE_TOPSCORE_ANZAHL 10

#define DATABASE_FILE "sudoku.sqlite3"

/*
========================================================================
Structdefinitionen
========================================================================
*/
struct Bestenlisteneintrag {
	char sNutzername[NAME_MAX];
	char sSpielzeit[ZEIT_MAX];
	int iSchwierigkeit;
};

struct Nutzer {
	char sNutzername[NAME_MAX];
	char sVorname[NAME_MAX];
	char sNachname[NAME_MAX];
	char sPasswort[PASSWORT_MAX];
};

struct UebergabeLeseBestenliste {
	struct Bestenlisteneintrag eintraege[BESTENLISTE_TOPSCORE_ANZAHL];
	int curVal;
};

/*
========================================================================
Prototypen
========================================================================
*/
int StartMenue(void); // Chung
void RegistrierungMenue(void); // Henning
void LoginMenue(void); // Omar
int HauptMenue(void); // Sven
int SchwierigkeitMenue(void); // Chung
void Regelwerk(void); // Sven
void Bestenliste(); // Tom
void Abmelden(void);
void LoginMenue(void);
struct Bestenlisteneintrag* liesBestenlisteneintraege(int iSchwierigkeitsgrad);
int SudokuSpiel(int schwierigkeitsgrad);
int** InitSudoku(int schwierigkeitsgrad);
void fillBestenlisteneintraege(void* data, int argColumn, char** argVertical, char** columnName);

char* sNutzernameAngemeldet = NULL;
/*
========================================================================
Funktion main()
========================================================================
*/
int main(void) {
	/*int iRueckgabeStart = -1;
	int iRueckgabeHauptMenue = -1;
	int iSchwierigkeitsgrad = -1;
	do {
		iRueckgabeStart = StartMenue();
		if (iRueckgabeStart == STARTMENUE_LOGIN) {
			LoginMenue();
		}
		else if (iRueckgabeStart == STARTMENUE_REGISTER) {
			RegistrierungMenue();
		}
		else if (iRueckgabeStart != STARTMENUE_END) {
			do {
				iRueckgabeHauptMenue = HauptMenue();
				if (iRueckgabeHauptMenue == HAUPTMENUE_SPIEL) {
					iSchwierigkeitsgrad = SchwierigkeitMenue();
					SudokuSpiel(iSchwierigkeitsgrad);
				}
				else if (iRueckgabeHauptMenue == HAUPTMENUE_REGEL) {
					Regelwerk();
				}
				else if (iRueckgabeHauptMenue == HAUPTMENUE_LISTE) {
					Bestenliste();
				}
			} while (iRueckgabeHauptMenue != HAUPTMENUE_LOGOUT);
		}
	} while (iRueckgabeStart != STARTMENUE_END);*/
	LoginMenue();
	return 0;
}

void Bestenliste() {
	liesBestenlisteneintraege(SCHWER);
}

struct Bestenlisteneintrag* liesBestenlisteneintraege(int iSchwierigkeitsgrad) {
	char* sql;
	sqlite* db_handle;
	int rc;
	struct UebergabeLeseBestenliste uebergabe;
	uebergabe.curVal = 0;

	sql = sqlite3_mprintf(
		"SELECT A.FK_Nutzer, A.Spielzeit, B.Programmwert FROM Bestenliste AS A "
		"LEFT JOIN Schwierigkeit AS B "
		"ON A.FK_Schwierigkeit = B.ID "
		"ORDER BY B.Programmwert, A.Spielzeit "
		"WHERE B.Programmwert = %i;", iSchwierigkeitsgrad);

	rc = sqlite3_open(DATABASE_FILE, &db_handle);
	if (rc != SQLITE_OK) {
		sqlite3_close(db_handle);
		exit(-1);
	}

	rc = sqlite3_exec(db_handle, sql, *fillBestenlisteneintraege, &uebergabe, NULL);
	// TODO errormessage
	return uebergabe.eintraege;
}

void fillBestenlisteneintraege(void* data, int maxCol, char** value, char** columnName) {
	char sNutzername[NAME_MAX];
	char sSpielzeit[ZEIT_MAX];
	int iSchwierigkeit;
	if (maxCol == 3) {
		return;
	}
	struct UebergabeLeseBestenliste* uebergabe = (struct UebergabeLeseBestenliste*)data;
	struct Bestenlisteneintrag eintrag;
	strcpy(eintrag.sNutzername, (char*)value++);
	strcpy(eintrag.sSpielzeit, (char*)value++);
	eintrag.iSchwierigkeit = atoi((char*)value++);
	uebergabe->eintraege[uebergabe->curVal] = eintrag;
	if (uebergabe->curVal < BESTENLISTE_TOPSCORE_ANZAHL) {
		uebergabe->curVal++;
	}
	

}

struct Nutzer* liesLogindaten(char* sNutzername) {
	struct Nutzer benutzer;
	char* sql;
	sqlite3* db_handle;
	sqlite3_stmt* statement;
	int iSpalte;
	int iReturncode;
	struct UebergabeLeseBestenliste uebergabe;
	uebergabe.curVal = 0;

	sql = sqlite3_mprintf(
		"SELECT Nutzername, Vorname, Nachname, Passwort FROM Benutzer "
		"WHERE Nutzername = %s", sNutzername);

	iReturncode = sqlite3_open(DATABASE_FILE, &db_handle);

	if (iReturncode != SQLITE_OK) {
		sqlite3_close(db_handle);
		exit(-1);
	}

	iReturncode = sqlite3_prepare_v2(db_handle, sql, strlen(sql), &statement, NULL);
	if (SQLITE_OK) {

		// Wir wissen, wie die Spalten ankommen
		iSpalte = 0;
		strcopy(benutzer.sNutzername, sqlite3_column_name(statement, iSpalte++));
		strcopy(benutzer.sVorname, sqlite3_column_name(statement, iSpalte++));
		strcopy(benutzer.sNachname, sqlite3_column_name(statement, iSpalte++));
		strcopy(benutzer.sPasswort, sqlite3_column_name(statement, iSpalte++));
		return &benutzer;
	}
	else {
		return NULL;
	}
}

void LoginMenue(void) {

	int bFalscheingabe = FALSE;
	char cUsernameEingabe[NAME_MAX];
	char cPasswortEingabe[PASSWORT_MAX];
	int iArrayLength;
	int Passcorrect;

	do {

		system("cls");
		printf("\n\n  A N M E L D U N G\n");
		printf("  = = = = = = = = =\n\n");
		printf("  Bitte geben Sie den Nutzernamen und"
			" das Passwort Ihres registrierten Kontos ein.\n\n");
		printf("  Bitte Nutzernamen eingeben: ");
		scanf("%s", cUsernameEingabe);
		iArrayLength = sizeof(cUsernameEingabe) / sizeof(cUsernameEingabe[0]);

	} while (iArrayLength >= NAME_MAX && iArrayLength <= NAME_MIN);

	struct Nutzer* benutzer = liesLogindaten(cUsernameEingabe);
	do {

		system("cls");
		printf("\n\n  A N M E L D U N G\n");
		printf("  = = = = = = = = =\n\n");
		printf("  Bitte geben Sie den Nutzernamen und"
			" das Passwort Ihres registrierten Kontos ein.\n\n");
		printf("  Bitte Nutzernamen eingeben: %s\n\n", &cUsernameEingabe);
		if (bFalscheingabe == TRUE) {
			printf("  Bitte versuchen sie es erneut!\n");
			bFalscheingabe = FALSE;
		}
		printf("  Bitte Passwort eingeben: ");
		scanf("%s", cPasswortEingabe);
		Passcorrect = strcmp(cPasswortEingabe, benutzer->sPasswort);
		if (Passcorrect == 1) {
			bFalscheingabe = TRUE;
		}

	} while (Passcorrect == 1);

	sNutzernameAngemeldet = cUsernameEingabe;
	system("cls");

	printf("\n\n  Sie werden eingeloggt und zum Hauptmenue weitergeleitet...\n\n");
	printf("  ");
	system("pause");
}