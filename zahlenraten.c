#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    //Variablen
    int eingabe = 101;
    int versuche;
    int max;
    int zufallszahl;

    //Generieren der Zufallstahl
    srand(time(NULL));
    printf("Gib den maximalen Wert an den die Zahl errichen darf.");
    scanf("%d", &max);
    zufallszahl = ((rand() % max) + 1);

    //Auswahl der Versuche und Start des Spieles
    printf("Wie viele versuche willst du haben?");
    scanf("%d", &versuche);
    printf("Errate die Zahl von 1 bis %d. Du hast %d versuche\n", max, versuche);

    for (;eingabe != zufallszahl && versuche > 0 || versuche == -1;)        //Schleife läuft so lange, bis die Zahle erraten wurde oder die Versuche auf 0 sinken.
    {
        if (versuche == -1 || eingabe == -1)        //Cheatcode, der die Zufallszahl anzeigt
        {
            printf("Du hast den Cheat gefunden! Die Zahl ist %d\n", zufallszahl);
            versuche = 2;
        }

        scanf("%d", &eingabe);      //Eingabe wird Abgespeichert und dann mit der Zufallszahl verglichen um zu entscheiden ob sie größer, kleiner oder gleich ist.
        if (eingabe > zufallszahl)
        {
            printf("Zu gross!\n");
        }

        if (eingabe < zufallszahl)
        {
            printf("Zu klein!\n");

        }
        versuche--;
        printf("Du hast noch %.0d versuche\n", versuche);
    }

    if (versuche == 0)      //Ausgabe der Zahl wenn sie nicht erraten wurde
    {
        printf("Schade, du hast die Zahl nicht erraten. Die Zahl war %d\n", zufallszahl);
    }

    if (versuche > 0)       //Ausgabe wenn die Zahl erraten wurde
    {
        printf("Richtig");
    }
    return 0;

}