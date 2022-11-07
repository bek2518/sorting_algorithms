#include "sort.h"

/**
 * bubble_sort - sorts array of integers in ascending
 * order using bubble sort
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp, counter;
	if (size >= 2)
	{
		for (i = 0; i < (size - 1); i++)
		{
			counter = 0;
			for (j = 0; j < (size - 1); j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j + 1];
					array[j + 1] = array[j];
					array[j] = tmp;
					print_array(array, size);
					counter++;
				}
			}
			if (counter == 0)
			{
				break;
			}
		}
	}
}
