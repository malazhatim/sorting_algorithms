#include "sort.h"
/**
 * integer_swap - swap integers
 * @x: first integer
 * @y: secound integer
 */
void integer_swap(int *x, int *y)
{
	int swp;

	swp = *x;
	*x = *y;
	*y = swp;
}
