#include <stdio.h>

int main() {
    char sentence []="Rudolph is 15 years old";
    char str [20];
    int i;

    sscanf (sentence,"%s %*s %d",str,&i);
    printf ("%s -> %d\n",str,i);

    return 0;
}
