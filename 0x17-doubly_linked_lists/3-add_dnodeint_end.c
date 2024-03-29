#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a linked list
 * @head: pointer the head of the list
 * @n: the new node data
 * Return: address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((temp)->next != NULL)
		temp = temp->next;

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = temp;
	temp->next = new_node;


	return (*head);
}
