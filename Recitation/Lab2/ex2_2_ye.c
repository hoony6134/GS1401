#include <stdio.h>
int main()
{
   int H, W, N;
   printf("Enter H, W and N : ");
   scanf("%d %d %d", &H, &W, &N);
   
   int flo, num;
   flo = (N - 1) % H + 1;
   num = (N - 1) / H + 1;
   
   if (num >= 10)
      printf("N : %d ---------> Student's room number : %d%d\n", N, flo, num);
   else
      printf("N : %d ---------> Student's room number : %d0%d\n", N, flo, num);
   
   return 0;
}