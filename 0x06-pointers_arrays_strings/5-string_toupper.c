#include "main.h"
#include <string.h>
/**
 * string_toupper - changes string to uppercase
 * @s: a string
 * Return: returns char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
