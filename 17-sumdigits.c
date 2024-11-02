#include <stdio.h>

int main() {
    long long int a = 0;
    int sum = 0;
    printf("enter a number: ");
    scanf("%lld", &a);
    
    while (a != 0) {
        sum = sum + (a % 10);
        a = (long long int)(a / 10);
        // printf("\na: %lld", a);
    }
    
    printf("\nsum: %d", sum);
    return 0;
}