#include <stdio.h>

/**
 * main - this is the main function
 * return: return zero
 */
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char", sizeof(c));
	printf("Size of an int", sizeof(i));
	printf("Size of a long int", sizeof(li));
	printf("Size of a long long int", sizeof(lli));
	printf("Size of a float", sizeof(f));
	return (0);
}
