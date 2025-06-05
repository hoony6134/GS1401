#include <stdio.h>
#define SIZE 10

int find_all_in_array(int arr[], int size, int key, int found[]){
    int i=0;
    int j=0;
    for(i=0;i<size;i++){
        if(arr[i]==key) {
            found[j++] = i;
        }
    }
    return j;
}

int main(void) {
    int a[SIZE] = { 0 };
    int value, cnt = 0;
    int index[SIZE], i;
    printf("Enter %d integers: ",SIZE);
    for(i=0;i<SIZE;i++) scanf("%d",&a[i]);
    for(i=0;i<SIZE;i++) printf("%d ",a[i]);
    printf("\nThe value you want to retrieve: ");
    scanf("%d",&value);
    cnt = find_all_in_array(a,SIZE,value,index);
    if(cnt) {
        printf("Number of items found : %d\nIndex of found item: ",cnt);
        for(i=0;i<cnt;i++) printf("%d ",index[i]);
    } else {
        printf("%d not found..",value);
    }
}