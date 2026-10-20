#include <stdio.h>

int main() {

    const char secret = 'x';
    char guess;

    printf("Was ist dein guess?");
    if (scanf("%c", &guess) != 1) {
        printf("Ungültige eingabe!\n");
        return 1;
    }

    if (guess == secret) {
        printf("Treffer: %c\n", secret);
    }
    else {
        printf("Fail\n");
    }


return 0;
}