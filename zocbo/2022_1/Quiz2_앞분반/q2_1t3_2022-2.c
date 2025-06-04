#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 5

void times2(int ar[][COLS], int r){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<COLS;j++){
            ar[i][j] *= 2;
        }
    }
}

void showarr2(int ar[][COLS], int r){
    int i,j;
    for(i=0;i<r;i++){
        for(j=0;j<COLS;j++){
            printf("%3d",ar[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    int arr[ROWS][COLS];
    srand(time(NULL));
    int i,j;
    for(i=0;i<ROWS;i++){
        for(j=0;j<COLS;j++){
            arr[i][j] = rand() % 10;
        }
    }
    showarr2(arr, ROWS);
    times2(arr, ROWS);
    printf("\n");
    showarr2(arr, ROWS);
}