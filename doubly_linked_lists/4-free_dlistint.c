#include "lists.h"
#include <stdlib.h> /* For free() */

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list to be freed.
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	dlistint_t *next_node;

	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}


