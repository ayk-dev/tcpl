#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {
    /* Print Fahrenheit - Celsius table from 0... 300 
    formula C = (5/9)*(F - 32) */

    float cels;

    printf("Fahrenheit to Celsius conversion table:\n");
    for (float fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        cels = (5.0 / 9.0) * (fahr - 32);
        printf("\t%3.0f\t%6.1f\n", fahr, cels);
    }

    return 0;
}