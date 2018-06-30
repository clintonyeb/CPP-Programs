#include <cstdio>

int main() {
    int r = remove("temp.txt");
    if (r != 0) {
        perror("Error deleting file");
    } else {
        puts("Deleted file successfully");
    }
    return 0;
}
