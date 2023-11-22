#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending
 * order using the bubble sort algorithm
 * @array: Array to be sorted
 * @size: size of the array
 * Return: return Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	bool swapped;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		swapped = false;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				swapped = true;
				print_array(array, size);
			}
		}
		if (swapped == false)
			break;
	}
}
