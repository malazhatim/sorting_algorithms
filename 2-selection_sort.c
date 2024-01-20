#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b;
	int t, s, f = 0;

	if (array == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		t = a;
		f = 0;
		for (b = a + 1; b < size; b++)
		{
			if (array[t] > array[b])
			{
				t = b;
				f += 1;
			}
		}
		s = array[a];
		array[a] = array[t];
		array[t] = s;
		if (f != 0)
			print_array(array, size);
	}
}
