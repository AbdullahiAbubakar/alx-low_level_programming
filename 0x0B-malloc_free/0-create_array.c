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

	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	ar[i] = '\0';
	return (ar);
}

