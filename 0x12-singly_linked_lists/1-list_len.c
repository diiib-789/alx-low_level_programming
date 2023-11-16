#include "lists.h"

/**
 * list_len  return the number of elements in a linked list_t list
 *
 * @h: the list_t argument (head)
 *
 * Return: the number of element
 */

size_t	list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
