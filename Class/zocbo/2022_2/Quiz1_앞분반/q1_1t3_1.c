#include <stdio.h>

int main(void)
{
    int a, b;
    char cmd;
    printf("Enter the formula: ");
    scanf("%d%c%d", &a, &cmd, &b);
    switch (cmd)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '%':
        printf("%d", a % b);
        break;
    default:
        printf("You entered an unsupported operator.");
    }
}