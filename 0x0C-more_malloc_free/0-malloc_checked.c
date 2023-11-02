#include "main.h"

/**
 * malloc_checked - allocate a memory block
 * @b: the memory type
 * Return: the nothing allocated
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
