#include "main.h"
/**
 * _memcpy - copies string to memory
 * @dest: destination string
 * @src: source string
 * @n: integer
 * Return: returns a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char c;

	for (i = 0; i < n; i++)
	{
		c = src[i];
		src[i] = dest[i];
		dest[i] = c;
	}
	return (dest);
}
