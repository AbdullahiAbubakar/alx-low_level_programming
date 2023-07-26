#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: n bytes
 * Return: returns destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dlen;

	dlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
