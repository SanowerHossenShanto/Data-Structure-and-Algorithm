#include <stdio.h>void quickSort(int[], int, int);int partition(int[], int, int);int main() {    int x[20], i, n;    printf("Enter the number of elements to be sorted: ");    scanf("%d", &n);    printf("Enter %d elements: ", n);    for (i = 0; i < n; i++)        scanf("%d", &x[i]);    quickSort(x, 0, n - 1);    printf("\nThe sorted array is:\n");    for (i = 0; i < n; i++)        printf("%4d", x[i]);    return 0;}void quickSort(int a[], int p, int r) {    if (p < r) {        int q = partition(a, p, r);        quickSort(a, p, q);        quickSort(a, q + 1, r);    }}int partition(int a[], int p, int r) {    int pivot = a[p], i = p - 1, j = r + 1;    while (1) {        do {            j--;        } while (a[j] > pivot);        do {            i++;        } while (a[i] < pivot);        if (i < j) {            int temp = a[i];            a[i] = a[j];            a[j] = temp;        } else {            return j;        }    }}