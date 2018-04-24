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
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

#define TRUE 1
#define FALSE 0

#define NICHT_GESETZT -1


/*
   ========================================================================
   Prototypen
   ========================================================================
*/
int StartMenue(void); // Chung
void RegistrierungMenue(void); // Henning
void LoginMenue(void); // Omar
int HauptMenue(); // Sven
int SchwierigkeitMenue(void); // Chung
void Regelwerk(void); // Sven
void Bestenliste(void);
void Abmelden(void);
int SudokuSpiel(int schwierigkeitsgrad);
int** InitSudoku(int schwierigkeitsgrad);
void printSchwierigkeitsAuswahl(void);
void printStartMenue(void);
int HauptmenueAufruf(void);
void Hauptmenueprint(void);
void RegelwerkAufruf(void);
void RegelwerkPrint(void);
void LoginMenue(void);

/*
   ========================================================================
   Funktion main()
   ========================================================================
*/
int main(void) {
	int rueckgabeStart = -1;
	int rueckgabeHauptMenue = -1;
	int schwierigkeitsgrad = -1;
	do {
		rueckgabeStart = StartMenue();
		if (rueckgabeStart == STARTMENUE_LOGIN) {
			LoginMenue();
		}
		else if (rueckgabeStart == STARTMENUE_REGISTER) {
			RegistrierungMenue();
		}
		else if (rueckgabeStart != STARTMENUE_END) {
			do {
				rueckgabeHauptMenue = HauptMenue();
				if (rueckgabeHauptMenue == HAUPTMENUE_SPIEL) {
					schwierigkeitsgrad = SchwierigkeitMenue();
				}
				else if (rueckgabeHauptMenue == HAUPTMENUE_REGEL) {
					Regelwerk();
				}
				else if (rueckgabeHauptMenue == HAUPTMENUE_LISTE) {
					Bestenliste();
				}
			} while (rueckgabeHauptMenue != HAUPTMENUE_LOGOUT);
		}
	} 
	while(rueckgabeStart != STARTMENUE_END);
	return 0;
}

void Hauptmenueprint(void) {
	
	char USERNAME[] = "User";
	// Ueberschrift
	printf("\n\n  H A U P T M E N U E\n");
	printf("  - - - - - - - - - -\n\n");

	// Usergruss
	printf("  Hallo, %s!\n", &USERNAME);

	// Userhinweis
	printf("  Geben Sie bitte zum Ausfuehren einer Aktion eins der"
	       " eingeblendeten Zeichen ein.\n\n");

	// Auswahl im Hauptmenue
	printf("  1: Spiel starten\n"
		   "  2: Regeln\n"
		   "  3: Bestenliste\n"
		   "  4: Abmelden\n"
		   "  x: Beenden\n\n");

}
int HauptmenueAufruf(void) {

	char cUserEingabe;
	int bFalscheingabe = FALSE;

	do {
		system("cls");
		Hauptmenueprint();

		// Falscheingabenpruefung
		if(bFalscheingabe == TRUE) {
			printf("  Ihre Angabe %c war leider falsch,"
				   " bitte versuchen sie es erneut!\n", cUserEingabe);
		} 
		printf("  Ihre Eingabe:  ");

		// Eingabe
		fflush(stdin);
		scanf("%c", &cUserEingabe);

		// Switch
		switch(cUserEingabe) {

			case '1': printf("Test 1"); //Schwierigkeitsmenue(void);
					system("pause");bFalscheingabe = FALSE;
					break;

			case '2': printf("Test 2"); //Regelwerk(void);
					system("pause");bFalscheingabe = FALSE;
					break;

			case '3': printf("Test 3"); //Bestenliste(void);
					system("pause");bFalscheingabe = FALSE;
					break;

			case '4': printf("Test 4"); //return HAUPTMENUE_LOGOUT;
					system("pause");bFalscheingabe = FALSE;
					break;

			case 'x': printf("Test X");//HAUPTMENUE_END
					system("pause");bFalscheingabe = FALSE;
					break;
			default : bFalscheingabe = TRUE;
		}
	} while(bFalscheingabe == TRUE);
}

void RegelwerkAufruf(void) {
	char bFalscheingabe = FALSE;
	char cUserEingabe;

	do {
		system("cls");
		RegelwerkPrint();

		// Falscheingabenpruefung
		if(bFalscheingabe == TRUE) {
			printf("  Bitte 'x' eingeben.\n");
		} 
		printf("  Ihre Eingabe:  ");

		// Eingabe
		fflush(stdin);
		scanf("%c", &cUserEingabe);

		// Switch
		switch(cUserEingabe) {

			case 'x': bFalscheingabe = FALSE;
					break;
			default : bFalscheingabe = TRUE;
		}
	} while(bFalscheingabe == TRUE);
}

void RegelwerkPrint(void) {

	printf("\n\n  R E G E L W E R K\n");
	printf("  = = = = = = = = =\n\n");
	printf("  1. Jede Ziffer von 1 bis 9 darf nur einmal pro Zeile"
		   ", Spalte und 3x3-Block vorhanden sein.\n");
	printf("  2. Jeder 3x3-Block ist dick umrandet\n");
	printf("  3. Das Spiel ist gewonnen sobald alle Felder gefuellt"
		   " sind. Es gibt nur eine Ergebnis\n");
	printf("  4. Die Hilfsfunktion zeigt moegliche Ziffern fuer alle"
		   " ungefuellten Felder an.\n");
	printf("  5. Sobald kein Feld mehr richtig gefuellt werden kann"
		   " verlieren Sie.\n");
	printf("  6. Schnelligkeit zahlt sich aus. Stellen Sie eine der"
		   " zehn besten Zeiten fuer Ihre ausgewaehlte Schwierigkeitsstufe"
		   " auf, erzielen Sie einen Platz auf der Bestenliste.\n\n");
	printf("  Geben Sie 'x' ein um den Dialog zu beenden.\n\n");

}
 
int StartMenue(void) {
	char cAuswahl;
	int bFalscheingabe = FALSE;

	do {
		system("cls");
		printStartMenue();
		if (bFalscheingabe == TRUE) {
			printf("\n  Falschangabe, ihre Angabe war: %c", cAuswahl);
		}

		printf("\n  Ihre Auswahl: ");
		fflush(stdin);
		scanf("%c", &cAuswahl);

		switch(cAuswahl) {
			case '1': 
			case '2': 
			case 'x': bFalscheingabe = FALSE;
					break;
			default:bFalscheingabe = TRUE;
		}
	} while (bFalscheingabe == TRUE);

	if (cAuswahl == '1') {
		return STARTMENUE_LOGIN;
	} else if (cAuswahl == '2') {
		return STARTMENUE_REGISTER;
	} else if (cAuswahl == 'x') {
		return STARTMENUE_END;
	}
}

void printStartMenue(void) {
	printf("\n\n");
	printf("  S U D O K U S T A R T\n");
	printf("  = = = = = = = = = = =\n\n");

	printf("  Geben sie zum Ausfuehren einer Aktion eins der angegebenen Zeichen ein.\n");
	printf("  1: In einem bereits existierenden Nutzerkonto einloggen.\n");
	printf("  2: Einen neuen Benutzer registrieren.\n");
	printf("  x: Das Programm beenden.\n");
}

int SchwierigkeitMenue(void) {
	char cAuswahl;
	int bFalscheingabe = FALSE;

	do {
		system("cls");
		printSchwierigkeitsAuswahl();
		if (bFalscheingabe == TRUE) {
			printf("\n  Falschangabe, ihre Angabe war: %c", cAuswahl);
		}

		printf("\n  Ihre Auswahl: ");
		fflush(stdin);
		scanf("%c", &cAuswahl);

		switch(cAuswahl) {
			case '1': 
			case '2': 
			case '3': bFalscheingabe = FALSE;
					break;
			default:bFalscheingabe = TRUE;

		}
	} while (bFalscheingabe == TRUE);

	if (cAuswahl == '1') {
		return LEICHT;
	} else if (cAuswahl == '2') {
		return MITTEL;
	} else if (cAuswahl == '3'){
		return SCHWER;
	}
}

void printSchwierigkeitsAuswahl(void) {
	printf("\n\n");
	printf("  S C H W I E R I G K E I T S A U S W A H L\n");
	printf("  = = = = = = = = = = = = = = = = = = = = =\n\n");

	printf("  Bitte waehlen Sie ein Schwierigkeitsgrad aus.\n");
	printf("  1: Leicht\n");
	printf("  2: Mittel\n");
	printf("  3: Schwer\n");
}

void LoginMenue(void)
{
	printf("\n\n");
	printf("A N M E L D U N G \n");
    printf("= = = = = = = = = \n\n");
	printf("Bitte geben Sie in dem eingeblendeten Format den Nutzernamen und das Passwort Ihres registrierten Kontos ein.\n\n");
	printf("FORMAT \n");
    printf("Nutzername Passwort (mit Leerzeihchen getrennt) \n\n");
	printf("Ihre Eingabe:");
}