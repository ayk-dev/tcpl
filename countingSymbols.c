#include <stdio.h>

int main() {
    int c, spaces, chars;
    int digits[10];
    for (int i = 0; i < 10; i++) {
        digits[i] = 0;
    }
    
    spaces = 0;
    chars = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= '0') && (c <= '9')) {
            digits[c - '0']++;
        } else if (c == ' ') {
            spaces++;
        } else {
            chars++;
        }
    }

    printf("Digits: \n");
    for (int i = 0; i < 10; i++) {
        printf("%d: %d times\n", i, digits[i]);
    }
    printf("Spaces: %d\n", spaces);
    printf("Other characters: %d\n", chars);

    return 0;
}