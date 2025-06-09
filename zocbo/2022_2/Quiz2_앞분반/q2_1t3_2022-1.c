#include <stdio.h>
int main(void)
{
    char a = 97, b, c, d, e;
    char *ptr1, *ptr2, *ptr3;
    ptr1 = &b;
    ptr2 = &c;
    ptr3 = &e;
    printf("Please enter three characters separated by space : ");
    scanf("%c %c %c", ptr1, ptr2, ptr3);
    ptr1 = &a;
    ptr2 = &d;
    ptr3 = &e;
    *ptr2 = *ptr1;
    printf("%c%c%c%c%c", a, b, c, d, e);
}