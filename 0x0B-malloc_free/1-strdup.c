#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer
 * @str: a string
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
	char *s;
	int s_ln, i;

	if (str == NULL)
		return (NULL);
	s_ln = strlen(str);
	s = malloc(s_ln * sizeof(char) + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i <= s_ln; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
