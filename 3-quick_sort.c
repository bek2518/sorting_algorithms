#include "sort.h"

/**
 * create_pivot - divides the array at a pivot
 * @array: array to be sorted
 * @first: first position of the partition
 * @last: last position of the partition
 * @size: size of the array
 * Return: pivot position
 */

int create_pivot(int *array, int first, int last, size_t size)
{
	int pivot, i, j, loc;

	pivot = array[last];
	i = first - 1;
	for (j = first; j <= last - 1; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			loc = array[i];
			array[i] = array[j];
			array[j] = loc;
			if (i != j)
				print_array(array, size);
		}
	}
	loc = array[i + 1];
	array[i + 1] = array[j];
	array[j] = loc;
	if (i + 1 != last)
		print_array(array, size);
	return (i + 1);
}

/**
 * quick - implements quicksort algorithm recursively
 * @array: array to be sorted
 * @first: first position
 * @last: last position
 * @size: size of the array
 */

void quick(int *array, int first, int last, size_t size)
{
	int pos;

	if (first < last)
	{
		pos  = create_pivot(array, first, last, size);
		quick(array, first, pos - 1, size);
		quick(array, pos + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending
 * order using quick sort
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick(array, 0, (int)size - 1, size);
}
