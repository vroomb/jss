#include <stdio.h>
#include <stdbool.h>

double power(double b, int a){
    double result = 1;
    for (; a > 0; a--) {
        result = result * b;
    }
    return result;
}

int getorder(double n) {
    int i = 0;
    for (; n != 0; i++) {
        n = (long long int)(n / 10);
    }
    return i;
}

double mod(double a, double b) {
    while ((a - b) > 0) {
        a = a - b;
    }
    return a;
}

bool armstrong(double n) {
    const int o = getorder(n); double n2 = 0;
    for (double i = n; i != 0; i = (long long int)(i/10)) {
        n2 = n2 + power((mod(i, 10)), o);
    }
    if (n2 == n) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    double a = 0;
    printf("enter a number: ");
    scanf("%lf", &a);
    for (;a > 0; a--) {
        if (armstrong(a) == true)
            printf("%lf\n", a);
    }
    return 0;
}