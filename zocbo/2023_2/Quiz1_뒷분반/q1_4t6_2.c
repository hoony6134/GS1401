#include <stdio.h>

int factorial(int n) {
    int i, f=1;
    if (n==0) return 1;
    for(i=1;i<=n;i++) {
        f*=i;
    }
    return f;
}

int main(void) {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Result-> %d! = %d",n,factorial(n));
}