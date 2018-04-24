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
#include <string.h>
#include <stdlib.h>

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
void printRegistrierungMenue1(void);
void printRegistrierungMenue2(void);
void printRegistrierungMenue3(void);

/*
   ========================================================================
   Funktion main()
   ========================================================================
*/
int main(void) {
	RegistrierungMenue();
		
	return 0;
}

void RegistrierungMenue(void) {
	char sEingabe[65],
		//sVorname[20],
		//sNachname[20],
		sPasswort[20],
		sPassconfirm[20];
	char cBestaetigung = 'z';
	int bFalscheingabe = FALSE;
	do {
		do {
			system("cls");
			printRegistrierungMenue1();
			if (bFalscheingabe == TRUE) {
				printf("  Falscheingabe!\n");
			}
			printf("  Ihre Eingabe: ");
			fflush(stdin);
			scanf("%s", sEingabe);
			if (strlen(sEingabe) < 6) {
				bFalscheingabe = TRUE;
			}
			else {
				bFalscheingabe = FALSE;
			}
		}while (bFalscheingabe == TRUE);
		do {
			system("cls");
			printRegistrierungMenue2();
			if (bFalscheingabe == TRUE) {
				printf("  Falscheingabe!\n");
			}
			printf("  Ihre Eingabe: ");
			fflush(stdin);
			scanf("%c", &cBestaetigung);
			if (cBestaetigung != 'y' && cBestaetigung != 'n') {
				bFalscheingabe = TRUE;
			}
			else {
				bFalscheingabe = FALSE;
			}
		} while(bFalscheingabe == TRUE);
		if (cBestaetigung == 'y') {
			do {
				do {
					system("cls");
					printRegistrierungMenue3();
					if (bFalscheingabe == TRUE) {
						printf("\n  Falscheingabe!\n");
					}
					printf("  Ihre Eingabe: ");
					fflush(stdin);
					scanf("%s", sPasswort);
					if (strlen(sPasswort) < 8 || strlen(sPasswort) > 20) {
						bFalscheingabe = TRUE;
					}
					else {
						bFalscheingabe = FALSE;
					}
				} while(bFalscheingabe == TRUE);
				printf("\nBitte wiederholen Sie Ihr Passwort.\n\n");
				printf("  Ihre Eingabe: ");
				fflush(stdin);
				scanf("%s", sPassconfirm);
				if (strcmp(sPasswort, sPassconfirm) != 0) {
					bFalscheingabe = TRUE;
				}
				else {
					bFalscheingabe = FALSE;
				}
			} while(bFalscheingabe == TRUE);
		}
		else {
		}
	}while(cBestaetigung == 'n');
}

void printRegistrierungMenue1(void) {
	printf("  R E G I S T R I E R U N G\n");
	printf("  = = = = = = = = = = = = =\n\n");
	printf("  Bitte geben Sie in dem unten eingeblendeten Format Ihren " 
		"Nutzernamen, Nachnamen und Vornamen ein.\n");
	printf("  Beachten Sie bitte, dass der Nutzername eine Laenge von 5 bis 20"
		" Zeichen aufweisen muss. Sonderzeichen werden nicht akzeptiert.\n\n");
	printf("  FORMAT\n");
	printf("  Nutzername Nachname Vorname (mit Leerzeichen getrennt)\n\n");
}
void printRegistrierungMenue2(void) {
	printf("  R E G I S T R I E R U N G\n");
	printf("  = = = = = = = = = = = = =\n\n");
	printf("  Ueberpruefen Sie bitte die folgenden Daten.\n\n");
	printf("  Nutzername: Testnutzer0815\n"); //Nutzername
	printf("  Nachname: Mustermann\n"); //Nachname
	printf("  Vorname: Max\n\n"); //Vorname
	printf("  Bestaetigen Sie diese Daten? (y/n)");
}
void printRegistrierungMenue3(void) {
	printf("  R E G I S T R I E R U N G\n");
	printf("  = = = = = = = = = = = = =\n\n");
	printf("  Nutzername: Testnutzer0815\n"); //Nutzername
	printf("  Nachname: Mustermann\n"); //Nachname
	printf("  Vorname: Max\n\n"); //Vorname
	printf("  Bitte geben Sie Ihr zukuenftiges Kontopasswort ein.\n");
	printf("  Beachten Sie, dass das Passwort eine Laenge von 8 bis 20 Zeichen aufweisen muss.\n\n");
}