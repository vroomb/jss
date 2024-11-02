#include <stdio.h>
#define F(x) (9.0/5.0)*x + 32.0

int main() {
    float c;
    printf("Please input temperature in celcius: ");
    scanf("%f", &c);
    printf("The temperature in fahrenheit is: %f", F(c));
    return 0;
}
