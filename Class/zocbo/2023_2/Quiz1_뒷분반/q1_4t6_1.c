#include <stdio.h>

int main(void) {
    int h,m,f;
    printf("Enter the current time (hour:minute)-> ");
    scanf("%d:%d",&h,&m);
    printf("Enter your free time (in minutes)-> ");
    scanf("%d",&f);
    m+=f;
    if (m>=60) {
        h += m/60;
        m %= 60;
    }
    printf("Time to return (hour:minute)-> %d:%d",h,m);
}