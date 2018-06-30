#include <stdio.h>

int main(int argc, char* argv[]){
    int i = 0;
    printf("Args: %i\n", argc);
    while(argv){
        printf("%s ", *++argv);
    }
    return 0;
}