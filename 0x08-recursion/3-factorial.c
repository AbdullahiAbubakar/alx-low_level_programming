#include "main.h"
/**
 * factorial - returns factorial of a number
 * @n: an integer
 * Return: returns a factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
