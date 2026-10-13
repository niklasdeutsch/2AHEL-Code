#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int eingabe = 101;
    int zufallszahl = ((rand() % 100) + 1);
    int versuche;
    int max;

    printf("in welchem Berich soll die Zahl liegen? Gib den maximalen Wert an den die Zahl errichen darf.");
    scanf("%d", &max);
    if (zufallszahl > max)
    {
        zufallszahl = zufallszahl - (100 - max);
    }

    printf("Wie viele versuche willst du haben?");
    scanf("%d", &versuche);
    printf("Errate die Zahl von 1 bis %d. Du hast %d versuche\n", max, versuche);

    for (;eingabe != zufallszahl && versuche > 0 || versuche == -1;)
    {
        if (versuche == -1 || eingabe == -1)
        {
            printf("Du hast den Cheat gefunden! Die Zahl ist %d\n", zufallszahl);
            versuche = 2;
        }

        scanf("%d", &eingabe);

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

    if (versuche == 0)
    {
        printf("Schade, du hast die Zahl nicht erraten. Die Zahl war %d\n", zufallszahl);
    }

    if (versuche > 0)
    {
        printf("Richtig");
    }
    return 0;

}