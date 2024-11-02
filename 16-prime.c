#include <stdio.h>

int main() {
    int a = 0; 
    printf("enter a number: ");
    scanf("%d", &a);
    for (int i = 2; i < a; i++) {
        if ((a % i) == 0) {
            printf("%d is composite", a);
            return 0;
        }
    }
    printf("%d is prime", a);
    return 0;
}