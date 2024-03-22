#include "lists.h"

/**
 * sum_dlistint -  sum of the data (n) of a dlistint_t linked list
 * @head: head pointer of the list
 * Return: sum of the data, 0 otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (temp == NULL)
		return (sum);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
