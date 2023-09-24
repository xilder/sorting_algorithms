#include "sort.h"

/**
 * selection_sort - sorts an array of integers using selection sort
 *
 * @array: the array to be sorted
 * @size: the size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int *lowest, tmp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		lowest = array + i;
		for (j = i + 1; j < size; j++)
		{
			if (*lowest > array[j])
			{
				lowest = array + j;
			}
		}
		if ((array + i) != lowest)
		{
			tmp = *lowest;
			*lowest = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
