#include <stdio.h>

int main(void) {
    int i,j;
    for (i=6;i>=1;i--){
        for (j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}