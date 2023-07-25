#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: a string
 */
void print_rev(char *s)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		break; 
	}
	{
		printf("%s", s);
	}
	i++;

	for (; s[i] >= 0; i--)
	{
		printf("%s", s);
	}
}
