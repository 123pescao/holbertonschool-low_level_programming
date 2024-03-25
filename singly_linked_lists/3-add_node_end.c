#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup_str;
	unsigned int len = 0;

   /* Duplicate the string */
	dup_str = strdup(str);
	if (dup_str == NULL)
		return (NULL);

   /* Calculate the length of the string */
	while (str[len])
		len++;

   /* Allocate memory for the new node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(dup_str);
		return (NULL);
	}

   /* Assign data to the new node */
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = NULL;

   /* If the list is empty, new node becomes the first node */
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
       /* Traverse the list to find the last node */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node; /* Make the last node point to the new node */
	}

	return (new_node);
}
