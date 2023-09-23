#include "sort.h"

/**
 * bubble_sort - sorts an array of values with bubblesort
 * @array: a pointer to an array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, len = size;
	int tmp, bub = 1;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < len && bub; i++)
	{
		bub = 0;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				bub = 1;
				print_array(array, size);
			}
		}
		len--;
	}
}
