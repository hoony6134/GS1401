#include <stdio.h>

void rotate3(int *px, int *py, int *pz) {
    int temp = *pz;
    *pz = *py;
    *py = *px;
    *px = temp;
}

int main() {
    int x, y, z;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &x, &y, &z);
    rotate3(&x, &y, &z);
    printf("%-8d%-8d%-8d", x, y, z);
    return 0;
}