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
int HauptMenue(void); // Sven
int SchwierigkeitMenue(void); // Chung
void Regelwerk(void); // Sven
void Bestenliste(void);
void Abmelden(void);
int SudokuSpiel(int schwierigkeitsgrad);
int** InitSudoku(int schwierigkeitsgrad);

/*
   ========================================================================
   Funktion main()
   ========================================================================
*/
int main(void) {
	 LoginMenue(); // Omar
	/*int rueckgabeStart = -1;
	int rueckgabeHauptMenue = -1;
	int schwierigkeitsgrad = -1;
	do {
		rueckgabeStart = StartMenue();
		if (rueckgabeStart == STARTMENUE_LOGIN)
		{
			LoginMenue();
		}
		else if (rueckgabeStart == STARTMENUE_REGISTER) 
		{
			RegistrierungMenue();
		}
		else if (rueckgabeStart != STARTMENUE_END) 
		{
			do {
				rueckgabeHauptMenue = HauptMenue();
				if (rueckgabeHauptMenue == HAUPTMENUE_SPIEL)
				{
					schwierigkeitsgrad = SchwierigkeitMenue();
				}
				else if (rueckgabeHauptMenue == HAUPTMENUE_REGEL)
				{
					Regelwerk();
				}
				else if (rueckgabeHauptMenue == HAUPTMENUE_LISTE)
				{
					Bestenliste();
				}
			} while (rueckgabeHauptMenue != HAUPTMENUE_LOGOUT);
		}
	} 
	while(rueckgabeStart != STARTMENUE_END);*/
	 system("pause");
	return 0;
}
/*
   ========================================================================
    LoginMenue()
   ========================================================================
*/
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