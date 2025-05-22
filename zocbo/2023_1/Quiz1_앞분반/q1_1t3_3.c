#include <stdio.h>

int main(void) {
    int d, m, y;
    printf("Enter date in d m y format : ");
    scanf("%d %d %d", &d, &m, &y);

    int m1 = (m >= 3) ? m - 2 : m + 10;
    int y1 = (m >= 3) ? y : y - 1;

    int y_s = y1 % 100;
    int n_s = y1 / 100;

    float f = d + y_s + (float)y_s/4 - 2*n_s + (float)n_s/4 + (float)(26*m1 - 2)/10;
    int day = ((int)f % 7 + 7) % 7;

    switch(day) {
        case 0: printf("Sunday"); break;
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
    }

    return 0;
}
// 좆됨 버리셈