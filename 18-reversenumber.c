#include <stdio.h>

int getorder(int input) {
    int order = 1;
    for (; input/10 != 0; order = order*10)
        input = input/10;
    return order;
}

int reverse(int input) {
    int reverse_number = 0;
    for (int order = getorder(input); order != 0; order = order/10) {
        reverse_number = reverse_number + order * (input % 10);
        input = input/10;
    }
    return reverse_number;
}

int main() {
    int a = 0;
    printf("Enter a number: "); scanf("%d", &a);
    printf("The reverse number was: %d", reverse(a));
    return 0;
}
