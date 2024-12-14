#include <stdio.h>
 
int comparefiles(FILE *input1, FILE *input2) {
    char a = getc(input1), b = getc(input2);
    while ((a != EOF) && (b != EOF)) {
        if (a != b) return -1;
        // printf("%c | %c\n", a, b);
        a = getc(input1), b = getc(input2);
    }
    return 1;
}
 
int main(int argc, char **argv) {
    const char Help[] = "Filecmp.exe\n\nSYNTAX:\n    Filecmp.exe [file1] [file2]\n\nNOTES:\n    To include spaces in [file], enclose the respective in \"\" quotes.";
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
 
    if (argc < 3) {
        printf("%s", Help);
        return 0;
    }
 
    FILE *input1 = fopen(argv[1], "r");
    FILE *input2 = fopen(argv[2], "r");
    if (input1 == 0) {
        printf("ERR: File1 not opened, probably does not exist.");
        return -1;
    }
    else if (input2 == 0){
        printf("ERR: File2 not opened, probably does not exist.");
        return -1;
    }
 
    printf("\n%d", comparefiles(input1, input2));
    fcloseall();
    return 0;
}
