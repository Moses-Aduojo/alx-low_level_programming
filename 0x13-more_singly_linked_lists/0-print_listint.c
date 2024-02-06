#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to a listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t node_count = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		node_count++;
		p = p->next;
	}
	/*printf("%lu\n", node_count);*/
	return (node_count);
}
