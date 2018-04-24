#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>


#define HORIZ "\xC4";

void fullscreen(void);

int main(void)
{
	char eingabe[1];
	system("cls");
	printf("\n\n\n");

	fullscreen();


	/*printf("  S U D O K U S T A R T\n");
	printf("  = = = = = = = = = = =\n\n");
	printf("  Geben Sie bitte Zum Ausfuehren einer Aktion eins der eingeblendeten Zeichen ein.\n");
	printf("  1: In ein bereits bestehendes Nutzerkonto einloggen\n");
	printf("  2: Einen neuen Benutzer registrieren\n");
	printf("  x: Das Programm beenden\n\n");
	printf("  Ihre Auswahl: ");
	scanf("%s", eingabe);*/

	
	/*printf("  R E G I S T R I E R U N G\n");
	printf("  = = = = = = = = = = = = =\n\n");
	printf("  Bitte geben Sie in dem unten eingeblendeten Format Ihren Nutzernamen, Nachnamen und Vornamen ein.\n");
	printf("  Beachten Sie bitte, dass der Nutzername eine Laenge von 5 bis 20 Zeichen aufweisen muss. Sonderzeichen werden nicht akzeptiert\n\n");
	printf("  FORMAT\n");
	printf("  Nutzername Nachname Vorname (mit Leerzeichen getrennt)\n\n");
	printf("  Ihre Eingabe: ");
	scanf("%s", eingabe);*/

	/*printf("  r e g i s t r i e r u n g\n");
	printf("  = = = = = = = = = = = = =\n\n");
	printf("  ueberpruefen sie bitte die folgenden daten.\n\n");
	printf("  nutzername: testnutzer001\n");
	printf("  nachname: mustermann\n");
	printf("  vorname: max\n\n");
	printf("  bestaetigen sie diese daten? (y/n)\n");
	printf("  ihre eingabe: ");
	scanf("%s", eingabe);*/


	
	//printf("  R E G I S T R I E R U N G\n");
	//printf("  = = = = = = = = = = = = =\n\n");
	//printf("  Nutzername: Testnutzer001\n");
	//printf("  Nachname: Mustermann\n");
	//printf("  Vorname: Max\n\n");
	//printf("  Bitte geben Sie ihr zukuenftiges Kontopasswort ein.\n");
	//printf("  Beachten Sie, dass das Passwort eine Laenge von 8 bis 20 Zeichen aufweisen muss.\n\n");
	//printf("  Ihre Eingabe: sudokusoft2018\n");
	//printf("  Bitte wiederholen Sie Ihr Passwort.\n\n");
	//printf("  Ihre Eingabe: ");
	//scanf("%s", eingabe);

	/*printf("  A N M E L D U N G\n");
	printf("  = = = = = = = = =\n\n");
	printf("  Bitte geben Sie in dem eingeblendeten Format den Nutzernamen und das Passwort Ihres registrierten Kontos ein.\n\n");
	printf("  FORMAT\n");
	printf("  Nutzername Passwort (mit Leerzeichen getrennt)\n\n");
	printf("  Ihre Eingabe: ");
	scanf("%s", eingabe);*/

	//printf("  H A U P T M E N U E\n");
	//printf("  = = = = = = = = = =\n\n");
	//printf("  Hallo, Testuser001!\n");
	//printf("  Geben Sie bitte Zum Ausfuehren einer Aktion eins der eingeblendeten Zeichen ein.\n\n");
	//printf("  1: Spiel starten\n");
	//printf("  2: Regeln\n");
	//printf("  3: Bestenliste\n");
	//printf("  4: Abmelden\n");
	//printf("  x: Beenden\n");
	//printf("\n");
	//printf("  Ihre Eingabe: ");
	//scanf("%s", eingabe);

	//printf("  S C H W I E R I G K E I T S A U S W A H L\n");
	//printf("  = = = = = = = = = = = = = = = = = = = = =\n\n");
	//printf("  Bitte geben Sie zur Auswahl der Schwierigkeit eins der eingeblendeten Zeichen ein.\n\n");
	//printf("  1: Leicht\n");
	//printf("  2: Mittel\n");
	//printf("  3: Schwer\n");
	//printf("\n");
	//printf("  Ihre Auswahl: ");
	//scanf("%s", eingabe);
	
	//SMALL_RECT windowSize = { 0, 0, 1000, 1000};
	//SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);

	/*printf("  S U D O K U\n");
	printf("  = = = = = =                                                         Timer: 00:00:11\n\n\n");
	printf("  Schwierigkeit: schwer\n\n");
	printf("     "); printf("  "); printf("   A    ");		printf("   B    ");							printf("   C    ");							printf("  "); printf("   D    ");					printf("   E    ");							printf("   F    ");							printf("  "); printf("   G    ");									printf("   H    ");			printf("   I    ");  printf("\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  1 \xB3 \xB3   5   \xB3");						printf("   6   \xB3");						printf("   3   \xB3");	printf(" \xB3");	printf("   2   \xB3");								printf("   1   \xB3");						printf("   7   \xB3");	printf(" \xB3");	printf("   9   \xB3");								printf("   8   \xB3");						printf("   4   ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  2 \xB3 \xB3   9   \xB3");						printf("   8   \xB3");						printf("   1   \xB3");	printf(" \xB3");	printf("   3   \xB3");								printf("   4   \xB3");						printf("   6   \xB3");	printf(" \xB3");	printf("   7   \xB3");								printf("   5   \xB3");						printf("   2   ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  3 \xB3 \xB3   2   \xB3");						printf("   4   \xB3");						printf("   5   \xB3");	printf(" \xB3");	printf("   9   \xB3");								printf("   8   \xB3");						printf("   5   \xB3");	printf(" \xB3");	printf("   1   \xB3");								printf("   3   \xB3");						printf("   6   ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  4 \xB3 \xB3   7   \xB3");						printf("       \xB3");						printf("   8   \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("   9   \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("   1   ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  5 \xB3 \xB3   4   \xB3");						printf("       \xB3");						printf("   6   \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("   2   \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");							printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  6 \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");							printf("       \xB3");						printf("   6   ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");							printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  7 \xB3 \xB3       \xB3");						printf("   9   \xB3");						printf("   8   \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("   3   \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("  8 \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3   2   \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("   3   \xB3");						printf("   6   \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("  9 \xB3 \xB3       \xB3");						printf("   6   \xB3");						printf("       \xB3");	printf(" \xB3");	printf("   8   \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("   7   \xB3");								printf("       \xB3");						printf("   9   ");							printf("\xB3 \xB3\n");
	printf("    \xB3 \xB3       \xB3");						printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       \xB3");	printf(" \xB3");	printf("       \xB3");								printf("       \xB3");						printf("       ");							printf("\xB3 \xB3\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("    \xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4");	printf("\xC5\xC4\xC5\n");
	printf("\n  Die Koordinate 'y' oeffnet das Regelwerk.\n");
	printf("  Sie koennen mit der Koordinate 'x' die Hilfsfunktion aufrufen.\n\n");
	printf("  Bitte geben Sie eine Koordinate ein.\n\n");
	printf("  Ihre Auswahl: B3\n");
	printf("  Bitte geben Sie eine Ziffer von 1 bis 9 an.\n\n");
	printf("  Ihre Auswahl: ");*/

	
//printf("\n\n");
//printf("\x21\x3a\x69\n");

	/*printf("  B E S T E N L I S T E\n");
	printf("  = = = = = = = = = = =\n\n\n\n");
	printf("  "); printf("                L e i c h t                 "); printf("      "); printf("  "); printf("                M i t t e l                 "); printf("      "); printf("  ");  printf("                S c h w e r                  "); printf("\n\n");
	printf("  \xB3\xB3 Nutzername                 \xB3  Spielzeit "); printf("\xB3\xB3    "); printf("  \xB3\xB3 Nutzername                 \xB3  Spielzeit "); printf("\xB3\xB3    "); printf("  \xB3\xB3 Nutzername                 \xB3  Spielzeit "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xC5\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC5"); printf("    "); printf("  \xC5\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC5"); printf("    "); printf("  \xC5\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4"); printf("\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC5"); printf("\n");
	printf("  \xB3\xB3 testnutzer                 \xB3  00:10:33  "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3 darksoulspro98             \xB3  00:09:12  "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3 sudokusoftnutzer           \xB3  00:11:19  "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3 leichtismeinestaerke       \xB3  00:13:04  "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3 122345678911234567891      \xB3  01:00:54  "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");
	printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("  \xB3\xB3                            \xB3            "); printf("\xB3\xB3    "); printf("\n");*/

	/*printf("\n\n\n");
	printf("  Geben Sie bitte 'x' ein um das Menue zu verlassen.\n\n");
	printf("  Ihre Auswahl: ");*/


	printf("  R E G E L W E R K\n");
	printf("  = = = = = = = = =\n\n");
	printf("  1. Jede Ziffer von 1 bis 9 darf nur einmal pro Zeile, Spalte und 3x3-Block vorhanden sein.\n");
	printf("  2. Jeder 3x3-Block ist dick rumrandet.\n");
	printf("  3. Das Spiel ist gewonnen sobald alle Felder gefuellt sind. Es gibt nur ein Ergebnis!\n");
	printf("  4. Die Hilfsfunktion zeigt moegliche Ziffern fuer alle ungefuellten Felder an.\n");
	printf("  5. Sobald kein Feld mehr richtig gefuellt werden kann verlieren Sie. :(\n");
	printf("  6. Schnelligkeit zahlt sich aus. Stellen Sie eine der zehn besten Zeiten fuer Ihre ausgewaehlte Schwierigkeitsstufe auf, \n");
	printf("     erzielen Sie einen Platz auf der Bestenliste.\n\n\n");
	printf("  Geben Sie 'x' ein den Dialog zu beeenden.\n");
	printf("\n  Ihre Auswahl: ");
	scanf("%s", eingabe);

	system("pause");
	return 0;
	//daggerdbl
	// https://help.adobe.com/en_US/framemaker/2015/using/using-framemaker-2015/Appendix/frm_character_sets_cs/frm_character_sets_cs-4.htm
	// https://en.wikipedia.org/wiki/Windows-1252
}

void fullscreen()
{
	keybd_event(VK_MENU, 0x38, 0, 0);
	keybd_event(VK_RETURN, 0x1c, 0, 0);
	keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
	keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
}
