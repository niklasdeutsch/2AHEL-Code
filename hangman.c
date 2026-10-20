#include <stdio.h>

int main() {

    const char secret = 'x';
    char guess;

    printf("Was ist dein guess?");
    scanf("%c", &guess);

    if (guess == secret) {
        printf("Treffer: %c\n", secret);
    }
    else {
        printf("Fail\n");
    }


return 0;
}