#include <stdio.h>

// Clear one singular line using ANSI escape code
void clearlines(unsigned int n) {
    for (; n > 0; n--) {
        printf("\x1b[1F"); // Move to beginning of previous line
        printf("\x1b[2K"); // Clear entire line
    }
}

// Gets the order of the number.
unsigned short int getorder(long long int number){
    unsigned short int order = 0;
    number = number/10;
    while (number != 0) {
        number = number/10;
        order++;
    }
    return order;
}

// Gets the total width of a truncated number in string form.
static inline unsigned short int getnumwidth(double number) {
    return (number > 0) ? getorder(number) + 8 : getorder(number) + 9;
}

// Initialize an m x n matrix.
void initmatrix(const int m, const int n, int matrix[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }
}

// Get the maximum order of all element in the matrix.
unsigned short int getmaxorder(const int m, const int n, int matrix[m][n]) {
    unsigned short int order = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            order = (order > getorder(matrix[i][j])) ? order : getorder(matrix[i][j]);
        }
    }
    return order;
}

// print an m x n matrix.
void printmatrix(const int m, const int n, int matrix[m][n]) {
    char Format[] = " %   ";
    const unsigned short int order = 2 + getmaxorder(m, n, matrix);
    
    if (order < 9) {
        Format[3] = 48 + order;
        Format[4] = 'd';
    } else {
        Format[3] = 48 + (int)(order / 10);
        Format[4] = 48 + (int)(order % 10);
        Format[5] = 'd';
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf(Format, matrix[i][j]);
        }
        printf("\n");
    }
}

// Let the user edit a matrix.
void editmatrix(int m, int n, int matrix[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printmatrix(m, n, matrix);
            printf("Enter the number at [%d, %d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            clearlines(m+1);
        }
    }
}

int tracematrix(int m, int n, int matrix[m][n]) {
    int trace = 0;
    for (int i = 0; (i < m) && (i < n); i++)
        trace = trace + matrix[i][i];
    return trace;
}

int main() {
    int m = 1, n = 1, o = 1;

    printf("Enter the dimensions of matrix A: ");
    scanf("%d", &m);
    clearlines(1);
    printf("Enter the dimensions of matrix A: %d x ", m);
    scanf("%d", &n);
    clearlines(1);
    printf("The dimensions of matrix A      : %d x %d\n\n", m, n);
    
    int a[m][n];
    initmatrix(m, n, a);
    printf("A = \n");
    editmatrix(m, n, a);
    printmatrix(m, n, a);
    
    printf("The trace of matrix A is: %d", tracematrix(m, n, a));
    return 0;
}



