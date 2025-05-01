#include <stdio.h>

int main(void)
{
    int sum = 0;
    int limit = 90;
    while (sum <= limit)
    {
        sum = sum + 5;
        limit = limit + 10; 
        printf("%d %d\n",sum,limit);
    }
}