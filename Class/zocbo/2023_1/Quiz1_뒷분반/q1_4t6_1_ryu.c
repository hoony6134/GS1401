#include <stdio.h>

int main() {
    int time, age;

    printf("Enter current time and age (time, age): ");
    scanf("%d %d", &time, &age);

    int fee;
    if (time < 17) {
        if (3 <= age && age <= 12 || 65 <= age)
            fee = 25000;
        else
            fee = 34000;
    }
    else
        fee = 10000;

    printf("The fee is %d.", fee);

    return 0;
}