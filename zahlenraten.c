#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int eingabe = 101;
    int zufallszahl = ((rand() % 100) + 1);
    int versuche;

    printf("Wie viele versuche willst du haben?");
    scanf("%d", &versuche);
    printf("Errate die Zahl von 1 bis 100. Du hast %.0d versuche\n",versuche);

    for (;eingabe != zufallszahl && versuche > 0 || versuche == -1;)
    {
        if (versuche == -1)
        {
            printf("Du hast den Cheat gefunden! Die Zahl ist %d\n", zufallszahl);
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
        printf("Schade, du hast die Zahl nicht erraten\n");
    }

    if (versuche > 0 || versuche == -2)
    {
        printf("Richtig");
    }
    return 0;

}