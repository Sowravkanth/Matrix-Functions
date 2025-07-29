// Transpose display of a matrix
#include <stdio.h>

int main() {
    int i, j, m, n, a[5][5];

    // Input matrix order
    printf("Enter the Order of matrix A: ");
    scanf("%d %d", &m, &n);

    // Input matrix elements
    printf("Enter Elements of Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display the transpose
    printf("The Transpose of the given matrix is:\n");
    for(i = 0; i < n; i++) {  // Loop should run till 'n'
        for(j = 0; j < m; j++) {
            printf("%d ", a[j][i]);  // Swaps row & column indices
        }
        printf("\n");
    }

    return 0;
}

