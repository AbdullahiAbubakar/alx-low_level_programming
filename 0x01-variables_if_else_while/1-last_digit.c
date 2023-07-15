#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - this is the main function
 * Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int num = n % 10;

	if (num > 5)
	{
		printf("last digit of %d is %d and is greater than 5", n, num);
	}
	else if (num == 0)
	{
		printf("last digit of %d is %d and is zero", n, num);
	}
	else if (num < 6 && num != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not zero", n, num);
	}
	return (0);
}
