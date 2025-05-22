#include <stdio.h>
  2 int main(){
  3     int num=5;
  4     int sum=10000;
  5     int dep, with;
  6 
  7     while(num!=0){
  8 printf("===== ATM Menu =====\n");
  9 printf("1. Deposit\n");
 10 printf("2. Withdraw\n");
 11 printf("3. Check Balance\n");
 12 printf("0. Exit\n");
 13 printf("Select menu: ");
 14 scanf("%d", &num);
 15 
 16         if(num == 0) {
 17             break;
 18         }
 19         else if(num==1){
 20         printf("Enter deposit amount\n\n");
 21         scanf("%d", &dep);
 22         sum+=dep;
 23         printf("Deposit successful.\n\n");
 24         continue;
 25         }
 26         else if(num==2){
 27             printf("Enter withdraw amount: ");
 28             scanf("%d", &with);
 29             if(sum-with<0) {
 30                 printf("Insufficient funds!\n\n");
 31                 continue;
 32             }
 33             else{
 34                 sum-=with;
 35                 printf("Withdrawal successful.\n\n");
 36                 continue;
 37             } }
 38         else if(num ==3){
 39             printf("Current balance: %d\n\n", sum);}}
 40     printf("Goodbye!\n");
  }
