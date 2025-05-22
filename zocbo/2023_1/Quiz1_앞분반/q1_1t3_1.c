#include <stdio.h>

int main(void) {
    int s=0,n,i=3;
    while (i) {
        printf("Enter a number: ");
        scanf("%d",&n);
        if (n<0) continue;
        s+=n;
        i--;
    }
    printf("\nTotal is %d.",s);
}