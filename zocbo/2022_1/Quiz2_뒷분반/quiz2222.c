#include <stdio.h>
int main(){
   printf("width? ");
   int width, height;
   int *area, *perimeter;
   scanf("%d", &width);
   printf("height? ");
   scanf("%d", &height);
   printf("\n");
   get_rect(width, height, &area, &perimeter);
   printf("area: %d, perimeter: %d\n", area, perimeter);

   return 0;
}

 void get_rect(int width, int height, int *area, int *perimeter){
    *area=width*height;
    *perimeter=2*(width+height);
 }
