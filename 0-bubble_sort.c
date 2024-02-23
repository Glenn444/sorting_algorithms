#include "sort.h"
/**
* bubble_sort - func to do bubble sort
* @array: array of unsorted int
* @size: size of the elements in the array
*
* Return: Nothing!
**/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
/**
 * swap - func to swap two arrays
 * @a: pointer to first array
 * @b: pointer to second array
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
