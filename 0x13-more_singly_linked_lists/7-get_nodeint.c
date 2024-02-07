#include "lists.h"

/**
 * get_nodeint_at_index - find nth node of a listint_t linked list
 * @head: pointer to the liked list
 * @index: positional index of the node in the list where index start from 0;
 * Return: pointer to the given node if exist otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while ((i <= index) && (current != NULL))
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
