#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: a string
 */
void rev_string(char *s)
{
	int i, l;
	char c;
	
	l = strlen(s);
	for (i = 0; i < (l / 2); i++)
	{
		c = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = c;
	}
}
