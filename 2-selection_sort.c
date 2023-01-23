#include "sort.h"

/**
 * selection_sort - sort an array of int with the selction sort algorithm
 * @array: an array of int to be sorted
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int temp;
	int temp2;

	for (i = 0; i < size; i++)
	{
		temp2 = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
}
