#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list to be freed
 */
void free_list(list_t *head)
{
    list_t *temp;

    while (head != NULL)
    {
        temp = head->next; // Save the pointer to the next node
        free(head->str);   // Free the string within the node
        free(head);        // Free the node itself
        head = temp;       // Move to the next node
    }
}
