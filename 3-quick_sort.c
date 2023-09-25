#include "sort.h"

/**
 * swap - Function that swaps two values
 *
 * @a: First value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}


void quick(int *array, int left, int right, size_t size);
/**
 * quick - the sorting algorithm
 *
 * @array: array to be sorted
 * @left: left of the array
 * @right: right of the array
 * @size: size of the array
 */
void quick(int *array, int left, int right, size_t size)
{
	int *pivot;
	int i = left - 1, j;

	if (left >= right)
		return;

	pivot = array + right;

	for (j = left; j < right; j++)
	{
		if (array[j] < *pivot)
		{
			i++;
			if (i < j)
			{
				swap(array + j, array + i);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > *pivot)
	{
		swap(array + i + 1, pivot);
		print_array(array, size);
	}
	quick(array, left, i, size);
	quick(array, i + 2, right, size);
}

/**
 * quick_sort - sorts an array of data using quicksort algorithms
 *
 * @array: array to be sorted
 * @size: size of the array to be sorted
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick(array, 0, size - 1, size);
}
