#include "lists.h"

/**
 * list_len - returns linked list
 *
 * @h: linked list
 * Return: elemensw in h
 */
size_t list_len(const list_t *h)
{
	if (h && h->next)
		return (1 + list_len(h->next));
	else if (h)
		return (1);
	return (0);
}
