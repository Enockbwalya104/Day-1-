#include <stdio.h>
 
int main() {
    int choice;
    float temp, result;


float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

    printf("Temperature Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        result = celsius_to_fahrenheit(temp);
        printf("%.2f°C is equal to %.2f°F\n", temp, result);
    } else if (choice == 2) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        result = fahrenheit_to_celsius(temp);
        printf("%.2f°F is equal to %.2f°C\n", temp, result);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
