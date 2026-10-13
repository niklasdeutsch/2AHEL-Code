#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int eingabe = 101;
    int schwierigkeit = 0;
    printf("Wähle wie viele Zahlen von 100 abgezogen werden sollen");
    scanf("%d", &schwierigkeit);

    if (schwierigkeit > 99)
    {
        schwierigkeit = 0;
    }

    int zufallszahl = ((rand() % 100) + 1) - schwierigkeit;
    int versuche;

    printf("Wie viele versuche willst du haben?");
    scanf("%d", &versuche);
    printf("Errate die Zahl von 1 bis %.0d. Du hast %.0d versuche\n", (100 - schwierigkeit), versuche);

    for (;eingabe != zufallszahl && versuche > 0; printf("Du hast noch %.0d versuche", versuche), versuche--);
    {
        scanf("%d", &eingabe);

        if (eingabe > zufallszahl)
        {
            printf("Zu gross!\n");
        }

        if (eingabe < zufallszahl)
        {
            printf("Zu klein!\n");
        }

    }

    if (versuche == 0)
    {
        printf("Schade, du hast die Zahl nicht erraten");
    }

    if (versuche > 0)
    {
        printf("Richtig");
    }
    return 0;

}