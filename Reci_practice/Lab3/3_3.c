#include <stdio.h>

int main(void) {
    int n, i=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Divisors of %d: ",n);
    while (i<=n) {
        if (n%i==0) printf("%d ",i);
        i++;
    }
}