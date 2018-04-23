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
int StartMenue(void);
void RegistrierungMenue(void);
void LoginMenue(void);
int HauptMenue();
int SchwierigkeitMenue(void);
void Regelwerk(void);
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
