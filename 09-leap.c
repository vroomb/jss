#include <stdio.h>
 
int main() {
    int year = 0;
    printf("enter year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
            {
                printf("Year is leap");
                return 0;
            }
            printf("Year is not leap");
            return 0;
        }
        printf("Year is leap");
        return 0;
    }
    printf("Year is not leap");
    return 0;
}