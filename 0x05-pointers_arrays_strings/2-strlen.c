#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of a string
 * @s: character
 * Return: return zero
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d", i);

	}
	return (0);
}
