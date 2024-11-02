#include <stdio.h>

double factorial(unsigned int a) {
    double b = 1;
    for (; a > 0; a--)
        b = b*a;
    return b;
}

int main() {
    int a;
    printf("enter a num: ");
    scanf("%d", &a);
    printf("%d! = %lf", a, factorial(a));
    return 0;
}