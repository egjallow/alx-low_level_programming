#include "main.h"

/**
 * _strlen - return the sum
 * @s: takes in a poiter as arg
 * Return: Retutn 0 if sucessful
 */
int _strlen(char *s)
{
	int i, sum;

	sum = 0;

	for (i = 0; s[i] != '\0'; i++)
		sum++;
	return (sum);
}
