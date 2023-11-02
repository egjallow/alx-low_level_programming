#include "main.h"

/**
 * malloc_checked - allocate a memory block
 * @b: the memory type
 * Return: the nothing allocated
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
