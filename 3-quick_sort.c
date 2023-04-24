#include "sort.h"
/**
 * swap - swap integers
 * @x: int
 * @y: int
 * Return: swapped
 */
void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * partition - partition pivot
 * @array: array
 * @start: int
 * @end: int
 * @size: size
 * Return: index of pivot
 */
int partition(int *array, int start, int end, size_t size)
{
	int pivot_value = array[end];
	int i = start - 1, j;

	for (j = start; j <= end; j++)
	{

	if (array[j] <= pivot_value)
	{
		i++;

	if (i != j)
	{
		swap(&array[i], &array[j]);
		print_array(array, size);
	}
	}
	}
	return (i);
}

/**
 * quicksort_recursion - sorts an array
 * @array: aray
 * @start: start
 * @end: value of array
 * @size: size of array
 * Return: void
 */
void quicksort_recursion(int *array, int start, int end, size_t size)
{
	int x;

	if (start < end)
	{
		x = partition(array, start, end, size);
		quicksort_recursion(array, start, x - 1, size);
		quicksort_recursion(array, x + 1, end, size);
	}
}

/**
 * quick_sort - quick sort
 * @array: array
 * @size: size
 * Return: sorted array
 */
void quick_sort(int *array, size_t size)
{
	quicksort_recursion(array, 0, size - 1, size);
}
