#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps integer
 * @a: integer a
 * @b: integer b
 */
void swap_int(int *a, int *b)
{
	int *c;

	*a = b;
	*b = c;
	*c = a;

	printf("%d", *a);
}
