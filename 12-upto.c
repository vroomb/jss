#include <stdio.h>

int main() {
    unsigned int a, b;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("sum of numbers given upto that number: %d", ((a*(a+1))/2));
    return 0;
}