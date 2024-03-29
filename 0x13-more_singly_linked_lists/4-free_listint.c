#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: a pointer to the head of the list
 */
void free_listint(listint_t *head)
{
    listint_t *current;

    /* Traverse the list and free each node */
    while (head != NULL)
    {
        current = head;
        head = head->next;
        free(current);
    }
}

