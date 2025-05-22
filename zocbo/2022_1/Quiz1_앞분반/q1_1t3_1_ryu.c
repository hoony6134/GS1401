#include <stdio.h>

int main() {
    printf("Enter three sides of a triangle : ");

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (!(a + b > c && b + c > a && c + a > b))
        printf("Not a valid triangle.");
    else if (a == b && b == c)
        printf("Equilateral triangle");
    else if (a == b || b == c || c == a)
        printf("Isosceles triangle");
    else if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
        printf("Right triangle");
    else
        printf("Normal triangle");

    return 0;
}