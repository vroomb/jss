#include <stdio.h>

int max(int a, int b) { 
    return (a > b) ? a : b;
}

int main() {
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Greatest number is: %d", max(max(a, b), c));
    return 0;
}