#include <stdio.h>

void haha(int a) {
    printf("a: %d\n", a);
    int b = 0, c = 0;
    for (; a > 0; a--) {
        if ((a % 2) == 0) {
            b = b + a;
        }
        else {
            c = c + a;
        }
    }
    printf("b: %d\nc: %d\n\n", b, c);
}

// odd : (n*n - 1)/4
// even: n/2(0 + n)

int main() {
    int a; 
    printf("enter a number: ");
    scanf("%d", &a);
    
    if ((a % 2) == 0) {
        printf("odd : %d\n", (a*a/4));
        a++;
        printf("even: %d\n", (a*a - 1)/4);
    } else {
        printf("even: %d\n", (a*a - 1)/4);
        a++;
        printf("odd : %d\n", (a*a/4));
    }
    
    return 0;
}
