#include "main.h"
/**
 * create_array - create a dynamic array
 * @size: size of the array
 * @c: the character of sting
 * Return: - an array of strings
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(size);

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
