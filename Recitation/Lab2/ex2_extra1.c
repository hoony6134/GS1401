#include <stdio.h>
int main(void){
    int a,b,c,d,e;
    printf("Please enter your identification number: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    printf("The check digit is %d.\n", (a + b + c + d + e) % 10);
}