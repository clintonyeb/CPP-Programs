#include <stdio.h>

int main(){
    char str[L_tmpnam];
    tmpnam(str);
    printf("temp file name: %s\n", str);
    return 0;
}
