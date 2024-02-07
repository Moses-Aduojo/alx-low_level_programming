#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: pointer to the head of a listint_t linked list
 * @idx: new node positional index
 * @n: new node data
 * Return: pointer to the inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *node_after, *current;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (*head);
	}

	current = *head;
	while (current->next != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			node_after = current->next;
			new_node->next = node_after;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	if (idx > i + 1)
	{
		free(new_node);
		return (NULL);
	}

	current->next = new_node;
	return (new_node);
}
