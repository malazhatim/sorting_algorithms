#include "sort.h"

/**
 * bubble_sort - sort array of integer
 * @array : array of integer
 * @size : size of onteger
 * descripe : print array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swp;

	if (!array || !size)
		return;

	i = 0;
	while (i < size)
	{
		for (j = 0; j < size -1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = swp;
				print_array(array, size);
			}
		}
		j++;
	}
}
