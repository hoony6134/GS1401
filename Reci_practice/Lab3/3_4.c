#include <stdio.h>

int main(void) {
    float max, i;
    printf("Enter the temperature in Celsius to stop at: ");
    scanf("%f",&max);
    printf("Celsius to Fahrenheit Conversion from 10C to %.2fC",max);
    for(i=10;i<=max;i++){
        printf("%.2fC = %.2fF\n",i,i*1.8+32);
    }
}