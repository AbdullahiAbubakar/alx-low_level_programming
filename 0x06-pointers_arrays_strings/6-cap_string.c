#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize each word
 * @s: a string
 * Return: returns a string
 */
char *cap_string(char *s)
{
	int i, j;
	char seps[] = "\t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; seps[j] != '\0'; j++)
		{
			if (s[i] == seps[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}


