#include <stdio.h>
/**
 * main - this is the main function
 * Return: returns zero
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}



