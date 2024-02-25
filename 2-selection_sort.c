#include "sort.h"
/**
 * swap - swaps the two items in an array
 * @a: first element
 * @b: second element
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
 *selection_sort - ...
 *@array: ...
 *@size: ...
 */
void selection_sort(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
	{
		size_t min_index = i;

		size_t j;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_index])
				min_index = j;
		}

		if (min_index != i)
		{
			swap(&array[i], &array[min_index]);
			print_array(array, size);
		}
	}
}
