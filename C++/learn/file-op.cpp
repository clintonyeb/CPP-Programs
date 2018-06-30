#include <stdio.h>

int main() {
    FILE* fp = fopen("test.txt", "w");
    if(fp != NULL) {
        fputs("You there?", fp);
    }
    fclose(fp);
    return 0;
}
