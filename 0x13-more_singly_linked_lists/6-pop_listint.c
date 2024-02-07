#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to pointer to a listint_t linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *s;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	s = *head;
	*head = (*head)->next;
	free(s);
	return (n);
}
