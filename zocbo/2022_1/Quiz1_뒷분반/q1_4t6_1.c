#include <stdio.h>
int main(void)
{
    int sum_e=0, sum_o=0, cnt_e=0, cnt_o=0, n;
    printf("Enter integers. Enter 0 to stop entering integers : ");
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (n % 2 == 0) {
            sum_e += n;
            cnt_e ++;
        } else {
            sum_o += n;
            cnt_o ++;
        }
    }
    printf("\nResult\n");
    printf("Number of evens: %d average: ", cnt_e);
    if (cnt_e == 0)
        printf("0\n");
    else
        printf("%g\n", (float)sum_e / cnt_e);
  
    printf("Number of odds: %d average: ", cnt_o);
    if (cnt_o == 0)
        printf("0\n");
    else
        printf("%g\n", (float)sum_o / cnt_o);
}