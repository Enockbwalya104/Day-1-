#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("  250 ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;
    printf("99.0 %.1f\n\n", fahrenheit);

    printf(" 99 ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("250.0%.1f\n", celsius);

    return 0;

}

