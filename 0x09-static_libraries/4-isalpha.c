#include "main.h"
/**
 * _isalpha - checks lowercase or uppercase letter
 * Return: returns zero
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
