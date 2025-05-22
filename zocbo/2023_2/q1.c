#include <stdio.h>
int main(){
    int h, m, fm, r_h, r_m;
    printf("Enter the current time (hour:minute)-> ");
    scanf("%d:%d", &h, &m);
    printf("Enter your free time (in minutes)-> ");
    scanf("%d", &fm);
    int a=m+fm;
    int i=0;

    if(a<60){
        r_h=h;
        r_m=a;
    }
    else{
        i=a/60;
        r_h=h+i;
        r_m=a-i*60;
    }
    printf("Time to return (hour:minute)-> %d:%d", r_h, r_m);
}