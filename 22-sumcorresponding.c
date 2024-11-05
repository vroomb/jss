#include <stdio.h>

int main() {
    unsigned short int n = 1;
    printf("how long is the array? ");
    scanf("%hu", &n);
    int a[n], b[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] is: ", i);
        scanf("%d", &(a[i]));
    }
    for (int i = 0; i < n; i++) {
        printf("b[%d] is: ", i);
        scanf("%d", &(b[i]));
    }
    printf("say c = a + b,\n");
    for (int i = 0; i < n; i++) {
        printf("c[%d] = %d\n", i, (a[i] + b[i]));
    }
    return 0;
}