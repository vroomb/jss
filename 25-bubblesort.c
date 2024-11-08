#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 
void printarray(int array[], unsigned short int n) {
    for (unsigned short int i = 0; i < n; i++) {
        printf("\narray[%hu] = %d", i, array[i]);
    }
}
 
void generaterandomarray(int array[], unsigned short int n) {
    for (unsigned short int i = 0; i < n; i++) {
        array[i] = (int)((rand()*50)/RAND_MAX);
    }
    return;
}
 
void bubblesort(int array[], unsigned short int n) {
    for (int i = (n-1); i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j+1]) {
                // swap the two values
                int temp = 0;
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    return;
}
 
int main() {
    srand(time(NULL));
    unsigned short int n = 1;
    printf("how long of an array? ");
    scanf("%hu", &n);
    int a[n];
    for (short unsigned int i = 0; i < 10; i++) {
        generaterandomarray(a, n);
        printarray(a, n);
        printf("\n\n");
        bubblesort(a, n);
        printarray(a, n);
        printf("\n------------------------------------\n");
    }
    return 0;
}