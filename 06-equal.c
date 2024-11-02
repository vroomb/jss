#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    if (a == b)
        printf("a is equal to b\n");
    else
        printf("a is not equal to b\n");

    return 0;
}
