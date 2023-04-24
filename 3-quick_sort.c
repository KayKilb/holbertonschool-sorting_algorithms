#include "sort.h"
#include <stdio.h>
/**
 * partition - partitions the array
 * @array: array to take in
 * @start: start of array;
 * @end: end of array
 * @size: full size of array
 * Return: position of pivot
 */
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *array, int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j] < pivot) {
            i++;
            swap(&array[i], &array[j]);
            printf("Swapped elements: %d %d\n", array[i], array[j]);
        }
    }

    swap(&array[i+1], &array[high]);
    printf("Swapped elements: %d %d\n", array[i+1], array[high]);

    return i+1;
}

void quick_sort(int *array, int low, int high) {
    if (low < high) {
        int p = partition(array, low, high);
        quick_sort(array, low, p-1);
        quick_sort(array, p+1, high);
    }
}

void print_array(int *array, size_t size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i != size-1) {
            printf(", ");
        }
    }
    printf("]\n");
}
