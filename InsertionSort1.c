#include<stdio.h>void insertionSort(int[], int);int main() {    int x[20], i, n;    printf("\nEnter the number of elements to be sorted: ");    scanf("%d", &n);    printf("\nEnter %d elements: ", n);    for (i = 0; i < n; i++)        scanf("%d", &x[i]);    insertionSort(x, n);    printf("\nThe sorted array is:\n");    for (i = 0; i < n; i++)        printf("%4d", x[i]);    return 0;}void insertionSort(int a[], int n) {    int i, j, key;    for (j = 1; j < n; j++) {        key = a[j];        i = j - 1;        while (i > -1 && a[i] > key) {            a[i + 1] = a[i];            i = i - 1;        }        a[i + 1] = key;    }}