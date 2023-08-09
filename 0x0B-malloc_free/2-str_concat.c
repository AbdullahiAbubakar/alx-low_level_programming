#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates strings
 * @s1: string 1
 * @s2: string 2
 * Return: returns a string
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, s_ln, s1_ln, s2_ln;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_ln = strlen(s1);
	s2_ln = strlen(s2);
	s_ln = s1_ln + s2_ln;
	s = malloc(sizeof(int));
	if (s == NULL)
		return NULL;
	for (i = 0; i < s1_ln; i++)
		s[i] = s1[i];
	for (i = s1_ln; i < s_ln; i++)
		s[i] = s2[i - s1_ln];
	s[i] = '\0';
	return (s);
}
