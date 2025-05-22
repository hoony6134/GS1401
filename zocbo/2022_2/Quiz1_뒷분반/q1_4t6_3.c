#include <stdio.h>
int biggest(int n1, int n2, int n3, int n4)
{
    int l = -1000000;
    if (n1 > l)
        l = n1;
    if (n2 > l)
        l = n2;
    if (n3 > l)
        l = n3;
    if (n4 > l)
        l = n4;
    return l;
}

int main(void)
{
    int a, b, c, d;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("Biggest: %d", biggest(a, b, c, d));
}