#include <stdio.h>
#include <math.h>

int main() {
    char a;
    printf("type of interest(s/c): ");
    a = getchar();
    while ((a != 's') && (a != 'c') && (a != 'S') && (a != 'C')){
        printf("please only input s or c\n");
        printf("type of interest(s/c): ");
        a = getchar();
    }

    float p; float r; float t;

    // principle
    printf("write principle: ");
    scanf("%f", &p);
    // printf("%f\n", p);

    // rate
    printf("write rate: ");
    scanf("%f", &r);
    while ((0 > r) || (r > 100)) {
        printf("r can neither be negative or above 100\n");
        printf("write rate: ");
        scanf("%f", &r);
    }
    // printf("%f\n", r);

    // time
    printf("write time (yrs): ");
    scanf("%f", &t);
    // printf("%f\n", t);

    if ((a == 's') || (a == 'S')) {
        printf("simple interest: %f", ((p*r*t)/100));
    } else if ((a == 'c') || (a == 'C')) {
        printf("compound interest: %f", (p*(pow((1 + r*0.01), t))));
    }    

    return 0;
}
