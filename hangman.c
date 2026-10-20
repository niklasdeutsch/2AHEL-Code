#include <stdio.h>

int main() {

    const char secret[] = "MONSTER4EVER";
    char guess;

    printf("Buchstabe: ");

    if (scanf(" %c", &guess) != 1) {
        printf("Ungültige eingabe!\n");
        return 1;
    }

    int hits = 0;
    for(int i = 0; i < sizeof(secret) - 1; i++) {
        if ((secret[i]) == guess) {
            hits++;
        }
    }

    printf("Treffer: %d\n", hits);

return 0;
}