#include <stdio.h>
 
int main() {
    int s1, s2, s3, s4, s5, sum;
    printf("Enter Marks for 5 subjects:\n");
    scanf("%d%d%d%d%d", &s1, &s2, &s3, &s4, &s5);
    sum = s1 + s2+ s3+ s4+ s5;
    // printf("%d", sum);
    printf("Your grade is ");
    if (sum >= 450) {
        printf("A");
    } else if (sum >= 400) {
        printf("B");
    } else if (sum >= 300) {
        printf("C");
    } else if (sum >= 0) {
        printf("D");
    } else {
        printf("oh no.");
    }
    return 0;
}
