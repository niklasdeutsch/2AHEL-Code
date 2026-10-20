#include <stdio.h>

int main() {

    const char secret = 'x';
    const char guess = 'y';

    if (guess == secret) {
        printf("Treffer: %d\n", secret);
    }
    else {
        printf("Fail\n");
    }


return 0;
}