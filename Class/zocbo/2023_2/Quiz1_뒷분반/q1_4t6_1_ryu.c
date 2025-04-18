#include <stdio.h>

int main() {
    int h, m, free_m;

    printf("Enter the current time (hour:minute)-> ");
    scanf("%d%*c%d", &h, &m);

    printf("Enter your free time (in minutes)-> ");
    scanf("%d", &free_m);

    int ret = h * 60 + m + free_m;
    printf("Time to return (hour:minute)-> %02d:%02d", ret / 60, ret % 60);

    return 0;
}