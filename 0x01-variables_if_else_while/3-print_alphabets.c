#include <stdio.h>
/**
 * main - this is the main function
 * Return: returns zero
 */
int main(void)
{
	int i;
	int j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; i <= 'Z'; i++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
