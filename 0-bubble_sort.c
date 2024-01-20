#include "sort.h"

/**
 * bubble_sort - sort array of integer
 * @array : array of integer
 * @size : size of onteger
 * descripe : print array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	int_t i, j;

	if (!arry || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				ineger_swap(array + j, array + j + 1);
				print_array(array, size);
			}
		}
		j++;
	}
}
