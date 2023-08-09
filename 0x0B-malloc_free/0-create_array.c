#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size
 * @c: a character
 * Return: returns an array
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(unsigned int) - 1);
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}

