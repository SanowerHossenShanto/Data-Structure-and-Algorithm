#include<stdio.h>int main() {    int i, j, m, n, p, q, k;    int a[10][10], b[10][10], c[10][10];    printf("Enter the number of rows and columns of matrix A: ");    scanf("%d%d", &m, &n);    printf("Enter the number of rows and columns of matrix B: ");    scanf("%d%d", &p, &q);    if (n != p) {        printf("Matrices cannot be multiplied.\n");        return 1; // Exit with error code 1    }    printf("Enter elements of matrix A:\n");    for (i = 0; i < m; i++)        for (j = 0; j < n; j++)            scanf("%d", &a[i][j]);    printf("Enter elements of matrix B:\n");    for (i = 0; i < p; i++)        for (j = 0; j < q; j++)            scanf("%d", &b[i][j]);    // Multiplying matrices A and B    for (i = 0; i < m; i++) {        for (j = 0; j < q; j++) {            c[i][j] = 0;            for (k = 0; k < n; k++) {                c[i][j] += a[i][k] * b[k][j];            }        }    }    printf("Matrix A:\n");    for (i = 0; i < m; i++) {        for (j = 0; j < n; j++)            printf("%d\t", a[i][j]);        printf("\n");    }    printf("Matrix B:\n");    for (i = 0; i < p; i++) {        for (j = 0; j < q; j++)            printf("%d\t", b[i][j]);        printf("\n");    }    printf("Product of matrices A and B:\n");    for (i = 0; i < m; i++) {        for (j = 0; j < q; j++)            printf("%d\t", c[i][j]);        printf("\n");    }    return 0;}