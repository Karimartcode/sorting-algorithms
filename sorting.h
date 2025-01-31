#ifndef SORTING_H
#define SORTING_H

void swap(int *a, int *b);
void print_array(int arr[], int n);
void generate_random(int arr[], int n, int max);
void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void merge_sort(int arr[], int l, int r);
void quick_sort(int arr[], int low, int high);

#endif
