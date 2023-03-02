#include <stdio.h>

/* count blanks in input*/

int main() {
    int c, spc, tb, nl;

    spc = 0;
    tb = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++spc;
        }
        if (c == '\t') {
            ++tb;
        }
        if (c == '\n') {
            ++nl;
        }
    }

    printf("Spaces count: %d\n", spc);
    printf("Tabs count: %d\n", tb);
    printf("New lines count: %d\n", nl);
}