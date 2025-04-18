#include <stdio.h>

int main(void) {
    int n, i, j, k;
    printf("Enter a num: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++) printf("%d",j);
        for(k=1;k<=n-i;k++) printf("*");
        printf("\n");
    }
}