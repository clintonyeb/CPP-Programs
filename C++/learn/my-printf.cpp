#include <stdio.h>

int main(){
    char name[100];
    printf("Enter name");
    scanf("%s", name);
    printf("Enter age");
    int age;
    scanf("%u", &age);
    printf("This is  %s, I'm% d years old", name, age);
    return 0;
}
