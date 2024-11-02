#include <stdio.h>

int main() {
    int a;
    printf("enter a: ");
    scanf("%d", &a);
    printf((a % 2 == 0) ? "a is even" : "a is odd");
    return 0;
}