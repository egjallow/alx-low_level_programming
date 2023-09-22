#include "lists.h"
int _strlen(char *str);
/**
 * print_list - it prints a list of linkelist
 * @h: list of linkelist
 * Return: list of linkelist
 */

size_t print_list(const list_t *h)
{
	int i = 0, ret = 1;
	char nul[] = "(nil)";

	if (!h)
		return (0);
	if (h->str)
		i = _strlen(h->str);
	printf("[%d] ", i);

	if (!h->str)
		printf("%s\n", nul);
	else
		printf("%s\n", h->str);
	if (h->next)
		ret += print_list(h->next);
	return (ret);
}

/**
 * _strlen - string length
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; *(str + i);)
		i++;
	return (i);
}
