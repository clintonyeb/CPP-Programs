#include <stdio.h>
#include <string.h>

int main(){
    char buffer[256];
    FILE* fp;
    fp = tmpfile();

    do {
        if(!fgets(buffer, 256, stdin))break;
        fputs(buffer, fp);
    } while(strlen(buffer) > 1);

    rewind(fp);

    while(!feof(fp)){
        if(fgets(buffer, 256, fp) == NULL) break;
        fputs(buffer, stdout);
    }

    fclose(fp);
    return 0;
}
