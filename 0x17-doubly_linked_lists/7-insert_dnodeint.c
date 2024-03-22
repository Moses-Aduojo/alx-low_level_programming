#include "lists.h"

/**
 * dlistint_len - find number of elements in a doubly linked list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t *current = h;
    size_t node_count = 0;

    while (current != NULL)
    {
        node_count++;
        current = current->next;
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
    dlistint_t *new_node;

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = temp->prev;
    new_node->next = temp;

    if (temp->prev != NULL)
        temp->prev->next = new_node;

    temp->prev = new_node;

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
    size_t len = dlistint_len(temp);
    dlistint_t *new_node;

    if (idx > len)
        return (NULL);

    if (len == 0 || idx == 0)
        return (add_dnodeint(h, n));

    if (idx == len)
        return (add_dnodeint_end(h, n));

    while (pos < idx)
    {
        temp = temp->next;
        pos++;
    }

    new_node = insert(&temp, n);
    return (new_node);
}

