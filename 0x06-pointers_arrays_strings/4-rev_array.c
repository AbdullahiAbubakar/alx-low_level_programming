#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < (n / 2); i++)
	{
		c = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = c;
	}
}

