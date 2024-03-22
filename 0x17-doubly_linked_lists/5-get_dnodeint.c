#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a dlistint_t linked list.
 * @head: head of the list
 * @index: node position index
 * Return: address of the node if found else NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp = head;

/**
 *	while (temp->next != NULL)
 *	{
 *		if (idx == index)
 *			return (temp);
 *		temp = temp->next;
 *		idx++;
 *	}
 *
 *	if (temp->next == NULL && idx == index)
 *		return (temp);
 */


	/**
	 * this approach is better and eliminate the need for the
	 * if statement below
	 */
	while (temp != NULL)
	{
		if (idx == index)
			return (temp);
		temp = temp->next;
		idx++;
	}

	return (NULL);
}
