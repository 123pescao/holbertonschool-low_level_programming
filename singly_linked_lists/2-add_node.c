#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to duplicate into the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *dup_str;
	unsigned int str_len = 0;

   /* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

   /* Duplicate the string for the new node */
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}

   /* Calculate the length of the string */
	while (str[str_len])
		str_len++;

    /* Initialize the new node */
	new_node->str = dup_str;
	new_node->len = str_len;
	new_node->next = *head;  /* Point new node's next to the current head */

   /* Move head to point to the new node */
	*head = new_node;

	return (new_node);
}
