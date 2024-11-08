#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void printarray(int a[], unsigned short int n) {
    for (unsigned short int i = 0; i < n; i++) {
        printf("\na[%hu] is: %d", i, a[i]);
    }
}

void scramblearray(int a[], unsigned short int n) {
    for (int i = 0; i < n*n; i++) {
        int r = (rand() % (n - 1));
        a[r]   = a[r] + a[r+1];       
        a[r+1] = a[r] - a[r+1];
        a[r]   = a[r] - a[r+1];
    }
}

int main() {
    srand(time(NULL));
    unsigned short int n = 1;
    printf("how long is the array? ");
    scanf("%hu", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("a[%d] is: ", i);
        scanf("%d", &(a[i]));
    }
    printf("\nscrambling the numbers...");

    scramblearray(a, n);
    
    printf("\nthe new array is: ");
    
    printarray(a, n);
    
    // printf("\nwhat number do you want to find? ");
    // int b = 0;
    // scanf("%d", &b);
    
    return 0;
}