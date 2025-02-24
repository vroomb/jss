#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[]) {
    if (argc != 2) {
        printf("Enter only 2 arguments.");
        return -1;
    }
    const int a = strlen(argv[1]);
    char output[a+1];
    for (int i = 0; i < a; i++) {
        output[i] = argv[1][a-i-1];
    }
    printf("%s\n", output);
    return 0;
}