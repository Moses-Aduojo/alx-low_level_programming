#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer to the head of the linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	 if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
