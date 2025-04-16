#include <stdio.h>
int main(void){
    float w,h;
    printf("Please enter your height (in meters): ");
    scanf("%f", &h);
    printf("Please enter your weight (in kilograms): ");
    scanf("%f", &w);
    float bmi = w / (h * h);
    printf("Your BMI is %f\nYour BMI VALUE: ", bmi);
    if (bmi < 18.5)
        printf("Underweight\n");
    else if (bmi >= 18.5 && bmi < 25)
        printf("Normal\n");
    else if (bmi >= 25 && bmi < 30)
        printf("Overweight\n");
    else
        printf("Obese\n");
}