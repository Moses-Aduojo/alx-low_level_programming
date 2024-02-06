#include "lists.h"

/**
 * listint_len - find length of linked list
 * @h: pointer to a listint_t list
 * Return: number of element in the lisst
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
