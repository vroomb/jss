#include <stdio.h>
 
int main() {
    int a, b; char c;
    printf("enter a: ");
    scanf("%d", &a);
    printf("enter b: ");
    scanf("%d", &b);
    printf("what op? (+ - * /) ");
    getchar();
    c = getchar();
    while ((c != '+') && (c != '-') && (c != '*') && (c != '/'))
    {
        printf("\ninvalid op; try again \nwhat op? (+ - * /) ");
        getchar();
        c = getchar();
    }
 
    printf("%d %c %d = ", a, c, b);
 
    switch ((int)c) {
    case 42:
        printf("%d", a*b);
        break;
 
    case 43:
        printf("%d", a+b);
        break;
 
    case 45:
        printf("%d", a-b);
        break;
 
    case 47:
        printf("%d", a/b);
        break;
 
    default:
        printf("err");
        break;
    }
    return 0;
}