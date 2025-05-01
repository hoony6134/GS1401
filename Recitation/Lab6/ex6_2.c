#include <stdio.h>

float calculateCharges(int h)
{
    float c = 0.0;

    if (h > 72)
    {
        return -1.0;
    }
    if (h <= 8)
    {
        c = 25.0;
    }
    else if (h <= 24)
    {
        c = 25.0 + (h - 8) * 5.0;
        if (c > 50.0)
            c = 50.0;
    }
    else
    {
        int d = (h + 23) / 24;
        c = d * 50.0;
    }
    c += h * 0.5;
    return c;
}

int main()
{
    int h1, h2, h3;
    float c1, c2, c3;
    int totH;
    float totC;
    printf("Enter the h rented for 3 cars: ");
    scanf("%d %d %d", &h1, &h2, &h3);

    c1 = calculateCharges(h1);
    c2 = calculateCharges(h2);
    c3 = calculateCharges(h3);

    totH = h1 + h2 + h3;
    totC = c1 + c2 + c3;

    printf("  Car          Hours         Charge\n");
    printf("%5d%15d%15.2f\n", 1, h1, c1);
    printf("%5d%15d%15.2f\n", 2, h2, c2);
    printf("%5d%15d%15.2f\n", 3, h3, c3);
    printf("TOTAL%15d%15.2f\n", totH, totC);
    return 0;
}
