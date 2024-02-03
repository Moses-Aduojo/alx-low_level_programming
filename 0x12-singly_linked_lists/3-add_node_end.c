#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be duplicated.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	char *new_str;

	new_node = malloc(sizeof(list_t)); /* Allocate a new node */
	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if allocation failed */
	}
	new_str = strdup(str); /* Duplicate the string */
	if (new_str == NULL)
	{
		free(new_node); /* Free the node if duplication failed */
		return (NULL); /* Return NULL if duplication failed */
	}

	new_node->str = new_str; /* Assign the string to the node */
	new_node->len = strlen(str); /* Assign the length of the string to the node */
	new_node->next = NULL; /* Set the next pointer of the node to NULL */

	if (*head == NULL) /* If the list is empty */
	{
		*head = new_node; /* Make the new node the head of the list */
	}
	else /* If the list is not empty */
	{
		last_node = *head; /* Start from the head of the list */
		while (last_node->next != NULL) /* Traverse the list until the last node */
		{
			last_node = last_node->next;
		}
		last_node->next = new_node; /* Link the last node to the new node */
	}

	return (new_node); /* Return the address of the new node */
}
