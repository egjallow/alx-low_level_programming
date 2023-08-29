#include "main.h"

/**
 * swap_int - swap the value
 * @a: take a pointer of a
 * @b: takes a pointer of b
 * Return: It returns 0 if success
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
