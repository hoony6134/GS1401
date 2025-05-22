#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i, nums[10], sum = 0;
    double avg;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        nums[i] = rand() % 100 + 1;
        printf("Random number %d: %d\n", i + 1, nums[i]);
        sum += nums[i];
    }
    avg = sum / 10.0;
    printf("\nSum of random numbers: %d\n", sum);
    printf("Average of random numbers: %.1f\n", avg);
    return 0;
}