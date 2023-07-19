#include "main.h"
/**
 * print_sign - prints sign of an integer
 * Return: returns zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	_putchar('\n');
	return (0);
}
