#include <stdio.h>
#define SIZE 10

int find_all_in_array(int arr[], int size, int key, int found[]) {
    int cnt = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            found[cnt++] = i;
        }
    }

    return cnt;
}

int main() {
    int a[SIZE] = { 0, };
    int value = 0;
    int index[SIZE];
    int cnt = 0;
    int i;

    printf("Enter 10 integers: ");
    for (i = 0; i < SIZE; ++i)
        scanf("%d", a + i);

    for (i = 0; i < SIZE; ++i)
        printf("%d ", a[i]);
    printf("\n");

    printf("The value you want to retrieve: ");
    scanf("%d", &value);

    cnt = find_all_in_array(a, SIZE, value, index);

    if (cnt == 0)
        printf("%d not found..\n", value);
    else {
        printf("Number of items found : %d\n", cnt);
        printf("Index of found item: ");
        for (i = 0; i < cnt; ++i)
            printf("%d ", index[i]);
        printf("\n");
    }

    return 0;
}
