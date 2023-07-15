#include <stdio.h>
/**
 * main - this is the main function
 * Return: returns zero
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (i < j)
			{
			putchar(i);
			putchar(j);
			}
			if (j < 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}



