#include "main.h"
/**
 * _abs - returns absolute value of an integer
 * Return: returns zero
 */
int _abs(int n)
{
	_putchar(n);
	_putchar(_abs(n));
	_putchar('\n');
	return (0);
}
