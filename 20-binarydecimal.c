#include <stdio.h>

long long int power(const int base, int exponent) {
    long long int result = 1;
    for (; exponent > 0; exponent--) {
        result = result * base;
    }
    return result;
}

long long int dec_to_bin(int a) {
    long long int b = 0;
    for (int i = 0; a != 0; i++) {
        b = b + (a % 2)*power(10, i);
        a = (int)(a/2);
    }
    return b;
}

int main() {
    int a = 0;
    printf("enter a number: ");
    scanf("%d", &a);
    printf("the binary for %d is %lld", a, dec_to_bin(a));
    return 0;
}