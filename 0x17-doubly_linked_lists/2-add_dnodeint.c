#include "lists.h"

/**
 * add_dnodeint - add a node to the begining of a doubly linked lists
 * @head: pointer to head of the list
 * @n: data value of the new node
 * Return: address of the new node of NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((*head)->prev != NULL)
		*head = (*head)->prev;

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
