#include <stdio.h>

int main(void) {
    printf("Enter three integers A, B, and C: ");
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (A + B <= C || A + C <= B || B + C <= A) {
        printf("This is not a valid triangle.\n");
        return 0;
    }
    if (A == B && B == C) {
        printf("Equilateral Triangle\n");
    } else if (A == B || B == C || A == C) {
        printf("Isosceles Triangle\n");
    } else if (A * A + B * B == C * C || B * B + C * C == A * A || A * A + C * C == B * B) {
        printf("Right Triangle\n");
    } else {
        printf("General Triangle\n");
    }

    return 0;
}
