#include <stdio.h>

int main() {
    /* Print Celsius to Fahrenheit table from 0... 300 
    formula C = (5/9)*(F - 32) */

    float cels, fahr;
    int lower, upper, step;

    lower = -50;
    upper = 100;
    step = 5;

    printf("Celsius to Fahrenheit conversion table:\n");

    cels = lower;
    while (cels <= upper) {
        fahr = cels * (9.0 / 5.0) + 32;
        printf("\t%3.0f\t%6.1f\n", cels, fahr);
        cels += step;
    }

    return 0;
}