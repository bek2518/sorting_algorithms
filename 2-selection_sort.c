#include "sort.h"

/**
 * selection_sort - sorts an array of integers in
 * ascending order using selection sort
 * @array: array to be sorted
 * @size: size of an array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[k])
				k = j;
		}
		if (i != k)
		{
			temp = array[k];
			array[k] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
