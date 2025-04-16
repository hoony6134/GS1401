#include <stdio.h>

int main(void){
    int a, b = 0; 
    printf("Enter: ");

    while (1){
        scanf("%d", &a);
        if (a == 0){
            break;
        }
        b += a;
    }

    printf("Sum: %d\n", b);
    return 0;
}
