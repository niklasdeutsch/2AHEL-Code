#include <stdio.h>

int main() {

    const char secret[] = "TestTest";
    const int len = sizeof(secret) - 1;
    char guessed[len];
    char guess;
    int hits = 0;

    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }

    printf("Rate einen Buchstaben: ");

    if (scanf("%c", &guess) != 1) {
        printf("Ungültige eingabe!\n");
        return 1;
    }

    for (int i = 0; i < len; i++) {
        if ((secret[i]) == guess) {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }
    printf("\nTreffer: %d\n", hits);
    return 0;
}