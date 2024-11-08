#include <stdio.h>

int min(int a[], unsigned short int n) {
    int min = 0;
    for (int i = 0; i < n; i++) {
        min = (min < a[i]) ? min : a[i];
    }
    return min;
}

int max(int a[], unsigned short int n) {
    int max = 0;
    for (int i = 0; i < n; i++) {
        max = (max > a[i]) ? max : a[i];
    }
    return max;
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
    printf("\nmin of the array is %d", min(a, n));
    printf("\nmax of the array is %d", max(a, n));
    return 0;
}