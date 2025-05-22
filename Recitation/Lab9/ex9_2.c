#include <stdio.h>

int main() {
    char sentence[101];
    int gap = 'a' - 'A';
    printf("Enter an English sentence without spaces: ");
    scanf("%100s", sentence);

    printf("Converted sentence: ");
    for (int i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] >= 'a' && sentence[i] <= 'z') {
            putchar(sentence[i] - gap);
        } else if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
            putchar(sentence[i] + gap);
        } else {
            putchar(sentence[i]);
        }
    }
    printf("\n");
    return 0;
}
