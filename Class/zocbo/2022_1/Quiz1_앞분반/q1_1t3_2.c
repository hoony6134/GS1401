#include <stdio.h>
#include <math.h>

float dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main(void)
{
    int x1, y1, x2, y2;
    printf("Enter the coordinates of the first point(x, y): ");
    scanf("%d %d", &x1, &y1);
    printf("Enter the coordinates of the second point(x, y): ");
    scanf("%d %d", &x2, &y2);
    printf("The distance between two points is %f", dist(x1, y1, x2, y2));
}