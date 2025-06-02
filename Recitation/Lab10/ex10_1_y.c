#include <stdio.h>
int main(){
   int arr[3][4]={}, i, j, num;
   float sum=0, avg;
   printf("Enter a 3x4 array of integers:\n");
   for(i=0; i<=2; i++){
      for(j=0; j<=3; j++){
         printf("Element [%d][%d]: ", i, j);
         scanf("%d", &num);
         arr[i][j]=num;
         sum+=num;
      }
   }
   avg=sum/12;
   printf("\n");
   printf("You entered:\n");
   for(i=0; i<=2; i++){
      for(j=0; j<=3; j++){
         printf("%4d", arr[i][j]);
      }
      printf("\n");
   }
   printf("\n\n");
   printf("Total sum: %.0f\n", sum);
   printf("Average: %.2f", avg);
   return 0;
}