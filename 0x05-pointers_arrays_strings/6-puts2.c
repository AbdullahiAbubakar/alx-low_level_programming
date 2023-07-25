#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character
 * @str: a string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (i < str[i])
	{
		if (str[i] != '\0')
		{
			printf("%c", str[i]);
		}
	i = i + 2;
	}
	printf("\n");
}
