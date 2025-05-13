#include <stdio.h>

int main() {
    int d, m, y;
    printf("Enter date in d m y format : ");
    scanf("%d %d %d", &d, &m, &y);

    int m1 = m >= 3 ? m - 2 : m + 10;
    int y1 = m >= 3 ? y : y - 1;

    int ys = y1 % 100;

    int y1_length = 0;
    while (y1 > 0) {
        y1 /= 10;
        y1_length++;
    }

    int divisor = 1;
    for (int i = 0; i < y1_length - 2; ++i)
        divisor *= 10;

    int ns = y1 / divisor;

    int f = d + ys + ys / 4 - 2*ns + ns / 4 + (26*m1 - 2) / 10;

    switch (f % 7) {
        case 0:
            printf("Sunday");
            break;
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
    }

    return 0;
}