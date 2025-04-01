#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sorting.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void generate_random(int arr[], int n, int max) {
    for (int i = 0; i < n; i++)
        arr[i] = rand() % max;
}
