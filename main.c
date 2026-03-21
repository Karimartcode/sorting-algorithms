#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "sorting.h"

void copy_array(int src[], int dst[], int n) {
    memcpy(dst, src, n * sizeof(int));
}

int main() {
    srand(time(NULL));
    int n;
    printf("Array size: ");
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    int *tmp = malloc(n * sizeof(int));
    generate_random(arr, n, 1000);
    clock_t start, end;
    printf("\nOriginal: ");
    if (n <= 20) print_array(arr, n);

    copy_array(arr, tmp, n);
    start = clock();
    bubble_sort(tmp, n);
    end = clock();
    printf("Bubble sort: %.4f ms\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);

    copy_array(arr, tmp, n);
    start = clock();
    selection_sort(tmp, n);
    end = clock();
    printf("Selection sort: %.4f ms\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);

    copy_array(arr, tmp, n);
    start = clock();
    insertion_sort(tmp, n);
    end = clock();
    printf("Insertion sort: %.4f ms\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);

    copy_array(arr, tmp, n);
    start = clock();
    merge_sort(tmp, 0, n - 1);
    end = clock();
    printf("Merge sort: %.4f ms\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);

    copy_array(arr, tmp, n);
    start = clock();
    quick_sort(tmp, 0, n - 1);
    end = clock();
    printf("Quick sort: %.4f ms\n", (double)(end - start) / CLOCKS_PER_SEC * 1000);

    if (n <= 20) { printf("Sorted: "); print_array(tmp, n); }
    free(arr); free(tmp);
    return 0;
}
