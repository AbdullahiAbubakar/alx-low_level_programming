#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: a string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		*s = *(s - 1)
	}