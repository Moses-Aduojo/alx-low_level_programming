#include "lists.h"

/**
 * print_dlistint - print all elements of a doubly linked lists
 * @h: pointer to the list
 * Return: numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		node_count++;
	}
	return (node_count);
}
