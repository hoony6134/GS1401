#include <stdio.h>
#define SIZE 10

void print_array(int arr[], int size){
    int i;
    for (i=0;i<size;i++) printf("%3d",arr[i]);
    printf("\n");
}

void swap_array(int *x, int *y, int size) {
    int temp;
    for (int i = 0; i < size; i++) {
        temp = x[i];
        x[i] = y[i];
        y[i] = temp;
    }
}

int main(void){
    int a[SIZE], b[SIZE], i;
    printf("a - Enter 10 integers: ");
    for (i=0;i<10;i++) scanf("%d",&a[i]);
    printf("b - Enter 10 integers: ");
    for (i=0;i<10;i++) scanf("%d",&b[i]);
    printf("\n\n\n<< before calling swap_array >>\na:");
    print_array(a,SIZE);
    printf("b:");
    print_array(b,SIZE);
    printf("\n\n << after calling swap_array >> \na:");
    swap_array(&a,&b,SIZE);
    print_array(a,SIZE);
    printf("b:");
    print_array(b,SIZE);
}