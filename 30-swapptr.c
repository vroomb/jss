#include <stdio.h>
 
void swap(int *a, int *b) {
    int temp = 0;
    temp = *a;
    *a = *b;
    *b = temp;
}
 
int main() {
    int a, b;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
 
    swap(&a, &b);
 
    printf("a is now: %d\n", a);
    printf("b is now: %d", b);
 
    return 0;
}
