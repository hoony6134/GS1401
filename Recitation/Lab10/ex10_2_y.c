#include <stdio.h>
int main(){
   int A[2][3]={}, B[2][3]={}, sum[2][3]={};
   int i,j,num;
   printf("Enter elements of matrix A (2x3):\n");
   for(i=0; i<=1; i++){
      for(j=0; j<=2; j++){
         printf("A[%d][%d]: ", i, j);
         scanf("%d", &num);
         A[i][j]=num;
         sum[i][j]+=A[i][j];
      }
   }
   printf("Enter elements of matrix B (2x3):\n");
   for(i=0; i<=1; i++){
      for(j=0; j<=2; j++){
         printf("B[%d][%d]: ", i, j);
         scanf("%d", &num);
         B[i][j]=num;
         sum[i][j]+=B[i][j];
      }
   }
   printf("\nSum of matrices A and B:\n");
   for(i=0;i<=1;i++){
      for(j=0; j<=2; j++){
         printf("%4d", sum[i][j]);
      }
      printf("\n");
   }
   return 0;
}