#include <stdio.h>
int main() {
    char ch;
    int a=0, e=0, i=0, o=0, u=0;
    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n') {
        switch(ch) {
            case 'a': case 'A':
                a++;
                break;
            case 'e': case 'E':
                e++;
                break;
            case 'i': case 'I':
                i++;
                break;
            case 'o': case 'O':
                o++;
                break;
            case 'u': case 'U':
                u++;
                break;
        }
    }
    
    printf("The number of 'a' or 'A' is %d,\n", a);
    printf("The number of 'e' or 'E' is %d,\n", e);
    printf("The number of 'i' or 'I' is %d,\n", i);
    printf("The number of 'o' or 'O' is %d,\n", o);
    printf("The number of 'u' or 'U' is %d\n", u);
    return 0;
}
