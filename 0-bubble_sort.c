#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending
 * order using bubble sort
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int tmp, counter;

	for (i = 0; i < (size - 1); i++)
	{
		counter = 0;
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			print_array(array, size);
			counter++;
		}
		if (counter == 0)
		{
			return;
		}
	}
}
