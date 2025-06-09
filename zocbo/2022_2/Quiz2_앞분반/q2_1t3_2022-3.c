#include <stdio.h>
#define ROWS 4
#define COLS 5

void triple(int ar[][COLS], int r) {
    int i,j;
    for(i=0;i<r;i++) for(j=0;j<COLS;j++) ar[i][j] *= 3;
}

void display(int ar[][COLS], int r) {
    int i,j;
    for(i=0;i<r;i++) {
        for(j=0;j<COLS;j++) printf("%2d ",ar[i][j]);
        printf("\n");
    }
}

int main(void) {
    int arr[ROWS][COLS]= {0};
    int i,j;
    for(i=0;i<ROWS;i++) for(j=0;j<COLS;j++) arr[i][j] = i*COLS + j+1;
    display(arr,ROWS);
    printf("\n");
    triple(arr,ROWS);
    display(arr,ROWS);
}
// 문제 졸면서 짜셨나