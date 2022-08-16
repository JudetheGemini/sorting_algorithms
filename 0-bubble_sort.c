#include "sort.h"
/**
 * bubble_sort - sort an array with the bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i, temp = 0, res = size;

	while (1)
	{
		for (i = 0; i < res - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
		res--;
		if (res == 1)
			break;
	}
}
