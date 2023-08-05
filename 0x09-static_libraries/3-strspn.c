#include "main.h"
/**
 * _strspn - length of prefix substring
 * @s: string
 * @accept: accept
 * Return: returns an integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0' && accept[j] != '\0' && s[i] == accept[j])
	{
		s++;
		accept++;
		k++;
	}
	return (accept);
}

