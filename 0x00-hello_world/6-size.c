#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 * Description: it prints size of datatypes
 *
 */

int main(void)
{
	char c;
	int i;
	float f;
	long int li;
	long long int lli;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of a int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(li));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
