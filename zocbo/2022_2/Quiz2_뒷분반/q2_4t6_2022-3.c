#include <stdio.h>
#include <stdlib.h>

void grade(double *list, int std_num, double *mx, double *mn, double *av)
{
    int i;
    *mx = -10000000;
    *mn = 10000000;
    for (i = 0; i < std_num; i++)
    {
        if (list[i] > *mx) *mx = list[i];
        if (list[i] < *mn) *mn = list[i];
        *av += list[i];
    }
    *av /= std_num;
}

int main()
{
    double *list;
    double max, min, ave = 0;
    int n, i;
    printf("Please enter the number of students in your class: ");
    scanf("%d", &n);
    list = malloc(sizeof(double) * n);
    for (i = 0; i < n; i++)
    {
        printf("Student #%d score: ", i + 1);
        scanf("%lf", &list[i]);
    }
    grade(list, n, &max, &min, &ave);
    printf("\nmax : %.2f, min : %.2f, ave : %.2f", max, min, ave);
    free(list);
    return 0;
}