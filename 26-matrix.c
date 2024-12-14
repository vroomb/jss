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

// m x o mat_c = m x n mat_a * n x o mat_b
void multiplymatrix(int m, int n, int o, int mat_a[m][n], int mat_b[n][o], int mat_c[m][o]) {
    initmatrix(m, o, mat_c);
    for (int i = 0; i < m; i++) {
        for (int k = 0; k < o; k++) {
            for (int j = 0; j < n; j++) {
                mat_c[i][k] = mat_c[i][k] + (mat_a[i][j]*mat_b[j][k]);
                // printmatrix(m, o, mat_c);
                // clearlines(m);
            }
        }
    }
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

    printf("Enter the dimensions of matrix B: %d x ", n);
    scanf("%d", &o);
    clearlines(1);
    printf("The dimensions of matrix B      : %d x %d\n\n", n, o);
    
    int a[m][n], b[n][o];
    initmatrix(m, n, a);
    printf("A = \n");
    editmatrix(m, n, a);
    printmatrix(m, n, a);
    
    initmatrix(n, o, b);
    printf("B = \n");
    editmatrix(n, o, b);
    printmatrix(n, o, b);

    int c[m][o];
    multiplymatrix(m, n, o, a, b, c);
    printf("A x B = \n");
    printmatrix(m, o, c);
    return 0;
}



