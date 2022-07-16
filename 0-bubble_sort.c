#include <stdio.h>
#include <stdlib.h>
#include "sort.h"


/**
 * bubble_sort - Implementation of bubble sort
 * @array: array of integers to be sorted
 * @size: size of the array (number of elements)
 *
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;

	for (i = 0; i < size && size >= 2; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
