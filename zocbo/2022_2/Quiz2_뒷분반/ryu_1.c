#include <stdio.h>

int add4(int x) {
    return x + 4;
}

void modify(int *a, int *b, int c, int d) {
    *a = c;
    *b = d;
}

int main() {
    int a, b, c, d;
    printf("Please enter a, b, c and d : ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    d = add4(d);
    modify(&a, &b, c, d);

    printf("The variables are a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);

    return 0;
}
