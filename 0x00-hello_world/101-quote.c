#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the main function
 * Return: returns zero
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, s, sizeof(s) - 1);
	return (1);
}
