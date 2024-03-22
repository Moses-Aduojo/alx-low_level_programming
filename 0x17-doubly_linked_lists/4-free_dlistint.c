#include "lists.h"

/**
 * free_dlistint - free linked list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	while (head->next)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
