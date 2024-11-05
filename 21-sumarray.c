#include <stdio.h>

long int sumarray(int a[], unsigned short int n) {
    long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + a[i];
    }
    return sum;
}

int main() {
    unsigned short int n = 1;
    printf("how long is the array? ");
    scanf("%hu", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] is: ", i);
        scanf("%d", &(a[i]));
    }
    printf("\nsum total of arrays is %ld", sumarray(a, n));
    return 0;
}