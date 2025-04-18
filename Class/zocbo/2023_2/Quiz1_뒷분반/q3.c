#include <stdio.h>
int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int k=1; k<=num-i; k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}