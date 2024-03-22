#include "lists.h"

/**
 * dlistint_len - find numbers elements of a doubly linked lists
 * @h: pointer to the list
 * Return: numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = NULL;
	size_t node_count = 0;

	if (h == NULL)
		return (node_count);
	current = h;
	while (current != NULL)
	{
		/* printf("%d\n", current->n);*/
		current = current->next;
		node_count++;
	}
	return (node_count);
}

/**
 * insert - insert node at given position other than the begining or ending
 * @h: address of the current position
 * @n: data for the new node
 * Return: address of the new node or NULL otherwise
 */
dlistint_t *insert(dlistint_t **h, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = temp;
	new_node->prev = temp->prev;
	temp->prev->next = new_node;
	return (new_node);
}

/**
 * insert_dnodeint_at_index - insert a node at a specified index
 * @h: pointer to the head of the list
 * @idx: position for the new node
 * @n: data for the new node
 * Return: address of the new node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	unsigned int pos = 0;
	dlistint_t *new_node;
	size_t len = dlistint_len(temp);

	if (idx > len)
		return (NULL);

	if (len == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}

	while (pos <= idx)
	{
		if (temp->next == NULL)
			pos++;
		if (pos == idx)
		{
			if (pos == 0)
				new_node = add_dnodeint(h, n);
			else if (pos == len)
				new_node = add_dnodeint_end(h, n);
			else
				new_node = insert(&temp, n);
			return (new_node);
		}
		temp = temp->next;
		pos++;
	}
	return (NULL);
}
