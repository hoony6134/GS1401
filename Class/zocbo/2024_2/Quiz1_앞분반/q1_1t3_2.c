#include <stdio.h>

int main(void) {
    int n, s=0;
    printf("Enter numbers (enter 0 to stop): ");
    while (1) {
        scanf("%d",&n);
        if (n == 0) break;
        s += n;
    }
    printf("The total sum is: %d",s);
}