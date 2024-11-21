#include <complex.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void shiftstring(char *str) {
    for (int i = 0; str[i+1]; i++) {
        str[i] = str[i+1];
    }
}

int ffindword(char *word, FILE *input) {
    int l_word = strlen(word);
    char a; int count = 0;
    a = getc(input);
    while (a != EOF) {
        int i = 0;
        while ((a == word[i]) && (i < l_word)) {
            i++; a = getc(input);
        }
        if (i == l_word) {
            count++;
        }
        a = getc(input);
    }
    return count;
}

int main(int argc, char **argv) {
    const char Help[] = "Findme.exe\n\nSYNTAX:\n    Findme.exe [file] [word]\n\nNOTES:\n    To include spaces in [file] or [word], enclose the respective in \"\" quotes.";

    for (int i = 0; i < argc; i++) {
        printf("\n%s", argv[i]);
    }
    printf("\n");

    if (argc < 3) {
        printf("%s", Help);
        return 0;
    }
    else {
        int length = 0;
        for (int i = 0; i < argc; i++) {
            length = length + strlen(argv[i]);
        }
    }

    FILE *input = fopen(argv[1], "r");
    if (!input){
        printf("ERR: File not opened, probably does not exist.");
        return EXIT_FAILURE;
    }

    // char a = 0;
    // while (a != EOF) {
    //     a = getc(input);
    //     printf("%c", a);
    // }

    printf("%d", ffindword(argv[2], input));
    return EXIT_SUCCESS;
}