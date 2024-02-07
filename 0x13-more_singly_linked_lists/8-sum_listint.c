#include "lists.h"

/**
 * sum_listint - sum all elemnt of a listint_t llinked list
 * @head: pointer to the a listint_t liked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
