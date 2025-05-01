#include <stdio.h>

int main(void) {
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=9;i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
}