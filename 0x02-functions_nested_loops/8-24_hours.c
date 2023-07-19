#include "main.h"
/**
 * jack_bauer - print 24 hours
 * Return: nothing
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 48; i <= 50; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(i);
			_putchar(j);
			_putchar(':');
		}
	}
}
