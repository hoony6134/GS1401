#include <stdio.h>

int main() {
    int endTemp;
    printf("Enter the temperature in Celsius to stop at: ");
    scanf("%d", &endTemp);

    printf("Celsius to Fahrenheit Conversion from 10C to %d.00C:\n", endTemp);
    int celsius = 10;
    while (celsius <= endTemp) {
        float fahrenheit = celsius * 9.0 / 5.0 + 32;
        printf("%d.00C = %.2fF\n", celsius, fahrenheit);
        celsius++;
    }

    return 0;
}