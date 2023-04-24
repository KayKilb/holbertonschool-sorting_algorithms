#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 * @n: integer stored in the node
 * @prev: pointer to the previous element of the list
 * @next: pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Given functions */
void print_array(const int *array __attribute__((unused)), size_t size)
void print_list(const listint_t *list);

/* Prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

/* aux functions */
void swap_head(listint_t **list, listint_t *aux);
void swap_middle(listint_t *aux);
void swap_tail(listint_t *aux);
void swap(int *x, int *y);
void quicksort_recursioin(int *array, int start, int end, size_t size);
int partition(int *array, int low, int high, size_t size);

#endif /*SORT_H*/
