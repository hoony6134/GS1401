#include <stdio.h>

void get_rect(int width, int height, int *area, int *perimeter) {
    *area = width * height;
    *perimeter = 2 * (width + height);
}

int main() {
    int width, height, area, perimeter;

    printf("width? ");
    scanf("%d", &width);
    printf("height? ");
    scanf("%d", &height);

    get_rect(width, height, &area, &perimeter);
    printf("\narea: %d, perimeter: %d\n", area, perimeter);

    return 0;
}
