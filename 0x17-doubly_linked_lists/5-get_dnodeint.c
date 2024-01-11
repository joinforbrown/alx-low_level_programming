#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be returned.
 *
 * Return: If the node at the given index does not exist, return NULL.
 *         Otherwise, return a pointer to the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        if (count == index)
            return current;

        count++;
        current = current->next;
    }

    return NULL; // Node at the given index does not exist
}

