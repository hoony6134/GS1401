#include <stdio.h>
#define N 10

void show_arr(int ar[], int n){
    int i;
    printf("\nInput integer array: ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}

int max_min_diff(int ar[], int n){
    int m=ar[0], M=ar[0], i;
    for(i=0;i<n;i++){
        if (ar[i] < m) m=ar[i];
        if (ar[i] > M) M=ar[i];
    }
    return (M-m);
}

int main(void){
    int arr[N], i;
    printf("Enter 10 integer numbers: ");
    for(i=0;i<N;i++) scanf("%d",&arr[i]);
    show_arr(arr, N);
    printf("Max - Min difference : %d", max_min_diff(arr, N));
}