#include "sort.h"

/**
 * bubble_sort - sorts an array of values with bubblesort
 * @array: a pointer to an array
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	int tmp, bub = 0;

	if (array == NULL || size < 2)
		return;

	while (bub == 0)
	{
		bub = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				bub = 0;
			}
			print_array(array, size);
		}
		len--;
	}
}
