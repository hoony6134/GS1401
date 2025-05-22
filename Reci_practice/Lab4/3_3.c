#include <stdio.h>

int main(void) {
    int i,t;
    float s=0;
    for(i=1;i<=5;i++) {
        printf("Enter number %d: ",i);
        scanf("%d",&t);
        s += t;
    }
    printf("Average: %.2f",s/5);
}