#include <stdio.h>

int main() {

    int c, spc;

    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == ' ') {
            while ((c = getchar()) == ' ') {
                continue;
            }
        }
    }

    // Other solution
    // char c;
    // char last_c = '\0';
    // while ((c = getchar()) != EOF)
    // {
    // if (c != ' ' || last_c != ' ')
    // {
    //   putchar(c);
    // }

    // last_c = c;
    // }

    return 0;
}