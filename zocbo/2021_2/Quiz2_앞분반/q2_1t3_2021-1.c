// 2025 기준 범위랑은 달라보임
// GPT (o4-mini-high) 코드
#include <stdio.h>

int main(void) {
    FILE *fp = fopen("hello.txt", "w");
    if (fp == NULL) {
        perror("fopen");
        return 1;
    }

    fprintf(fp, "Hello FILE IO");
    fclose(fp);
    return 0;
}