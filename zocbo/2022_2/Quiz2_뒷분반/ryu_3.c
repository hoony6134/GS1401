#include <float.h>
#include <stdio.h>
#include <stdlib.h>

void grade(double* list, int std_num, double* mx, double* mn, double* av) {
    *mx = DBL_MIN;
    *mn = DBL_MAX;

    for (int i = 0; i < std_num; ++i) {
        if (list[i] > *mx)
            *mx = list[i];
        if (list[i] < *mn)
            *mn = list[i];
        *av += list[i];
    }

    *av = *av / std_num;
}

int main() {
    double* list;
    double max = 0, min = 0, ave = 0;

    int size;
    printf("Please enter number of students in your class: ");
    scanf("%d", &size);

    list = (double *)malloc(sizeof(double) * size);
    if (list == NULL)
        return 1;

    for (int i = 0; i < size; ++i) {
        printf("Student #%d score: ", i + 1);
        scanf("%lf", list + i);
    }

    grade(list, size, &max, &min, &ave);
    printf("\nmax : %.2lf, min : %.2lf, ave : %.2lf\n", max, min, ave);

    return 0;
}
