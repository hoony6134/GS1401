#include <stdio.h>

int main(void)
{
    int time, age, price;
    printf("Enter current time and age (time, age): ");
    scanf("%d %d", &time, &age);
    if (time >= 17)
    {
        price = 10000;
    }
    else
    {
        if ((age>=3 && age<=12) || age>=65) {
            price = 25000;
        } else price=34000;
    }
    printf("The fee is %d.\n",price);
}