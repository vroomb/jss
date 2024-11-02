#include <stdio.h>

int main() {
    double a = 1; double b = 1;
    printf("printing the fibonacci nums: (press ^C to exit)\n");
    for (;;) {
        if (a < b) {
            a = a + b;
            printf("%lf", b);
        }
        else {
            printf("%lf", a);
            b = a + b;
        }
        getchar();
    }
    
    return 0;
}