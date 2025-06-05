#include <stdio.h>
void rotate3(int *px, int *py, int *pz){
    int temp = *pz;
    *pz = *py;
    *py = *px;
    *px = temp;
}
int main(){
    printf("Enter 3 numbers : ");
    int x, y, z;
    int *px, *py, *pz;
    scanf("%d %d %d", &x, &y, &z);
    px = &x;
    py = &y;
    pz = &z;
    rotate3(px, py, pz);
    printf("%-8d%-8d%-8d\n", x, y, z);
    return 0;
}
