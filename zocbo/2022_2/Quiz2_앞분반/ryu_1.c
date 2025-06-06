#include <stdio.h>

int main() {
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

    // 문제에서는 enclosed by double quotes "" 라고 해놓고 program output에는 안 해놓음
    printf("\"%c%c%c%c%c\"", a, b, c, d, e);

    return 0;
}
