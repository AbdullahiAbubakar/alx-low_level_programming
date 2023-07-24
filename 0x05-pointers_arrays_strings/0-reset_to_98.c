#include "main.h"
/**
 * reset_to_98 - points to 98
 * Return: returns zero
 */

void reset_to_98(int *n)
{
	int i;
	i = 98;
	*n = &i;
}
