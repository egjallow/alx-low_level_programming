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

	arr = (char *)malloc(size * sizeof(c));

	if (size == 0)
	{
		return ('\0');
	}
	return (arr);
}
