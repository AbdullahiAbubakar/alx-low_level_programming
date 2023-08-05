#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates a string
 * @dest: destination
 * @src: source
 * Return: returns dest
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}

