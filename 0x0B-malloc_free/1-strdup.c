#include "main.h"

/**
 * _strdup - a function that copy a string
 * @str: the string to copy
 * Return:a copy strin(ponter characters)
 */
char *_strdup(char *str)
{
	char *copy_str;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	copy_str = malloc(len * sizeof(char) + 1);

	if (copy_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		copy_str[i] = str[i];
	}
	copy_str[len] = '\0';

	return (copy_str);
}
