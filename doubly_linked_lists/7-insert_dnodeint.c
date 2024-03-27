#include "lists.h"
#include <stdlib.h> /* For malloc and NULL */

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A double pointer to the head of the dlistint_t list.
 * @idx: The index where the new node should be added, starting at 0.
 * @n: The integer for the new node to contain.
 *
 * Return: The address of the new node, or NULL if it failed or the index is
 * out of bounds.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node, *current = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current != NULL)
	{
		new_node->next = current->next;
		new_node->prev = current;
		if (current->next != NULL)
		{
			current->next->prev = new_node;
			current->next = new_node;
		return (new_node);
		}
	}
	free(new_node);
	return (NULL);
}
