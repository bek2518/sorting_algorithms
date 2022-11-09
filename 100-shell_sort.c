#include "sort.h"

/**
 * shell_sort - sorts an array of integers in ascending
 * order using shell sort
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	int interval = 1, i, j, temp;

	while (interval < ((int)(size)))
	{
		interval = (interval * 3) + 1;
	}
	for (interval = (interval - 1) / 3; interval > 0;
			interval = (interval - 1) / 3)
	{
		for (i = interval; i < (int)size; i++)
		{
			temp = array[i];

			for (j = i; j >= interval && array[j - interval] > temp; j -= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
		}
		print_array(array, size);
	}
}
