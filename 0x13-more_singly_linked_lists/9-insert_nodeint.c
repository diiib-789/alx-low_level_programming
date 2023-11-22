#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the listint_t argument (head)
 * @idx: the index to insert the node
 * @n: the int data of the node
 *
 * Return: the new node, or NULL if it doesn't exists
 */

listint_t	*insert_nodeint_at_index(listint_t **head, unsigned int x, int b)
{
	unsigned int i = 0;
	listint_t *new = NULL, *tmp;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new)
		{
			new->n = b;
			new->next = NULL;
			tmp = *head;

			if (x == 0)
			{
				new->next = *head;
				*head = new;
			}
			else
			{
				while (i != x - 1 && tmp)
				{
					tmp = tmp->next;
					i++;
				}
				if (!tmp)
				{
					free(new);
					return (NULL);
				}
				else
				{
					new->next = tmp->next;
					tmp->next = new;

				}
			}
		}
	}
	return (new);
}
