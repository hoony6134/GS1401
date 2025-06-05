#include <stdio.h>
void get_rect(int width, int height, int *area, int *perimeter){
    printf("width? ");
    scanf("%d",&width);
    printf("height? ");
    scanf("%d",&height);
    printf("\n");
    *area = width*height;
    *perimeter = 2*(width+height);
}

int main(void){
    int width, height, area, perimeter;
    get_rect(width, height, &area, &perimeter);
    printf("area: %d, perimeter: %d\n", area, perimeter);
}