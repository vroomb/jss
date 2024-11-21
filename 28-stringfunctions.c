#include <stdio.h>

int strlength(const char *str) {
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void strconcat(char *Dest, char *Source) {
    while (*++Dest);
    while(*Source){
        *Dest++ = *Source++;
    }
}

int main() {
    char a[30] = "hello";
    char *b = " world";
    printf("%d\n", strlength(a));
    strconcat(a, b);
    printf("%s\n", a);
}