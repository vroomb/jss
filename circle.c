#include <stdio.h>
#define PI_VALUE 3.14159265359
#define AREA(r) 3.14159265359*r*r
#define CIRC(r) 6.28318530718*r

int main() {
    float r;
    printf("pls tell r: ");
    scanf("%f", &r);
    printf("area: %f\n", AREA(r));
    printf("circumference: %f\n", CIRC(r));
    return 0;
}
