#include <stdio.h>

int isPrime(int num)
{
    int i, v=1;
    if (num == 1)
        return 0;
    for (i = 2; i < num; i++)
        if (num % i == 0)
            v = 0;
    return v;
}

int main(void)
{
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Prime numbers from 1 to %d:\n",n);
    for(i=1;i<=n;i++) if (isPrime(i)) printf("%d\n",i);
}