#include "main.h"

/**
 * _strstr - find a haystack
 * @haystack: the string to search
 * @needle: the search string
 * Return: - the found string
 */
char *_strstr(char *haystack, char *needle)
{
	char *the_NULL = '\0';

	while (*haystack != '\0')
	{
		const char *h = haystack;
		const char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return ((char *)haystack);
		}

		haystack++;
	}
	return (the_NULL);
}
