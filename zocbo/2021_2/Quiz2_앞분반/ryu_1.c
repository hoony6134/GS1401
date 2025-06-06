#include <stdio.h>

int main() {
    FILE* fp;

    if ((fp = fopen("hello.txt", "w")) == NULL) {
        return 1;
    }

    fprintf(fp, "Hello FILE IO");

    return 0;
}
