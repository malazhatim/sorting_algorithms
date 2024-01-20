#include "sort.h"

/**
*change - the positions of two elements into an array
*@array: array
*@x1: array element
*@x2: array element
*/
void change(int *array, ssize_t x1, ssize_t x2)
{
	int a;

	a = array[x1];
	array[x1] = array[x2];
	array[x2] = a;
}
/**
 *lomuto - lomuto partition sorting scheme implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: size array
 *Return: return the position of the last element sorted
 */
int lomuto_partition(int *array, ssize_t first, ssize_t last, size_t size)
{
	int a = array[last];
	ssize_t b = first, c;

	for (c = first; c < last; c++)
	{
		if (array[c] < a)
		{
			if (array[b] != array[c])
			{
				change(array, b, c);
				print_array(array, size);
			}
			b++;
		}
	}
	if (array[b] != array[last])
	{
		change(array, b, last);
		print_array(array, size);
	}
	return (b);
}
/**
 *quikso - qucksort algorithm implementation
 *@array: array
 *@first: first array element
 *@last: last array element
 *@size: array size
 */
void quikso(int *array, ssize_t first, ssize_t last, int size)
{
	ssize_t p = 0;


	if (first < last)
	{
		p = lomuto(array, first, last, size);

		quikso(array, first, p - 1, size);
		quikso(array, p + 1, last, size);
	}
}
/**
 *quick_sort - prepare the terrain to quicksort algorithm
 *@array: array
 *@size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quikso(array, 0, size - 1, size);
}
