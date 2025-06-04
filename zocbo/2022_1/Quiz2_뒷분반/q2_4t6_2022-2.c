#include <stdio.h>

int main(void)
{
    int i,j,tot;
    float avg, totavg=0;
    int scores[5][4] = {
        {28, 28, 26, 9},
        {30, 27, 30, 10},
        {25, 26, 24, 8},
        {18, 22, 22, 5},
        {24, 25, 30, 10}};
    printf("              mid   fin  team   att   tot\n");
    for(i=0;i<5;i++){
        printf("student%3d:",i+1);
        tot=0;
        for(j=0;j<4;j++){
            printf("%6d",scores[i][j]);
            tot+=scores[i][j];
        }
        totavg+=tot;
        printf("%6d\n",tot);
    }
    printf("average   :");
    for(j=0;j<4;j++){
        avg=0;
        for(i=0;i<5;i++){
            avg+=scores[i][j];
        }
        avg/=5;
        printf("%6.1f",avg);
    }
    printf("%6.1f",totavg/5);
}