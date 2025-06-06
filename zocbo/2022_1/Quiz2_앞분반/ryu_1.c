#include <stdio.h>

void rotate3(int *px, int *py, int *pz) {
    int tmp = *pz;

    *pz = *py;
    *py = *px;
    *px = tmp;
}

int main() {
    int a, b, c;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    rotate3(&a, &b, &c);
    printf("%d\t%d\t%d\n", a, b, c);

    return 0;
}
