#include <stdio.h>
#include <stdlib.h>

int strlength(const char *str) {
    int i = 0;
    while (str[i])
        i++;
    return i;
}

char *strconcat(char *Dest, char *Source) {
    int l1 = strlength(Dest);
    int l2 = strlength(Source);
    char *temp = malloc((l1 + l2 + 1)*sizeof(char));
    for (int i = 0; i < l1; i++) {
        temp[i] = Dest[i];
        // printf("%s\n", temp);
    }
    for (int i = 0; i < l2; i++) {
        temp[i + l1] = Source[i];
        // printf("%s\n", temp);
    }
    temp[l1+l2] = '\0';
    return temp;
}

int main() {
    char *a = "hello";
    char *b = " world";
    printf("%d\n", strlength(a));
    a = strconcat(a, b);
    printf("%s\n", a);
}