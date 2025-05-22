#include <stdio.h>
int main(void)
{
    int num;
    printf("Please enter your identification number: ");
    scanf("%d", &num);
    int a = num / 10000;
    int b = (num / 1000) % 10;
    int c = (num / 100) % 10;
    int d = (num / 10) % 10;
    int e = num % 10;
    printf("The check digit is %d.\n", num * 10 + (a + b + c + d + e) % 10);
}