#include <stdio.h>

int digitSum(int n)
{
    int s=0;
    while (n!=0) {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main(void)
{
    int n;
    printf("Enter a positive integer (less than or equal to 1,000,000): ");
    scanf("%d", &n);
    if (n > 1000000 || n<=0)
    {
        printf("Please enter a valid positive integer less than or equal to 1,000,000.");
    }
    else
    {
        printf("The sum of the digits is: %d", digitSum(n));
    }
}