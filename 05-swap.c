#include <stdio.h>

int main() {
    int a, b, c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("a is now: %d\n", a);
    printf("b is now: %d", b);

    return 0;
}
