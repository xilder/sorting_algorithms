#include "sort.h"

/**
 * shell_sort - sorts an array based using the shell sort algo
 *
 * @array: array to be sorted
 * @size: size of the array
 */

void shell_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, inter;

	if (array == NULL || size < 2)
		return;

	for (inter = 1; inter < (size / 3);)
		inter = inter * 3 + 1;

	for (; inter > 0; inter /= 3)
	{
		for (i = inter; i < size; i++)
		{
			tmp = array[i];
			for (j = i; j >= inter && array[j - inter] >= tmp; j -= inter)
			{
				array[j] = array[j - inter];
				array[j - inter] = tmp;
			}
		}
		print_array(array, size);
	}
}
