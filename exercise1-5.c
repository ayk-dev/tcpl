#include <stdio.h>

int main() {
    /* Print Fahrenheit - Celsius table from 0... 300 
    formula C = (5/9)*(F - 32) */

    float cels;

    printf("Fahrenheit to Celsius conversion table:\n");
    for (float fahr = 0.0; fahr <= 300.0; fahr += 20) {
        cels = (5.0 / 9.0) * (fahr - 32);
        printf("\t%3.0f\t%6.1f\n", fahr, cels);
    }

    return 0;
}