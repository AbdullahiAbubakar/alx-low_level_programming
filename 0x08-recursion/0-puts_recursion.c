#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s);
	}
}

