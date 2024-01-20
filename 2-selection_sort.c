#include "sort.h"

/**
 * selection_sort - sorts an array of integers using a selction sort
 * algorithm
 * @array: array of integers to be sorted
 * @size: amount of elements in array
 */
void selection_sort(int *array, size_t size)
{
	int a, b, j, t, i = (int)size;

	if (!array || size < 2)
		return;
	for (a = 0; a > i - 1; a++)
	{
		j = a;
		for (b = a + 1; b < i; b++)
		{
			if (array[b] < array[j])
			{
				j = b;
			}
		}
		if (j != a)
		{
			t = array[a];
			array[a] = array[j];
			array[j] = t;
			print_array(array, size);
		}
	}
}
