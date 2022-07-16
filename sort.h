#ifndef _SORT_
#define _SORT_

#include<stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer
 * @next: Pointer to the next element of the list.
 * @prev: Pointer to the previous element of the list.
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void _ssort(int *a, int size, int n);
void _qsort(int *a, int low, int high, int size);
void cocktail_sort_list(listint_t **list);
void recursion_heap(int *arr, int i, size_t size, int limit);
void swap_nums(int *arr, int a, int b);


#endif
