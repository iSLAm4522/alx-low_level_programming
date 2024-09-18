#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @head: A pointer to a pointer to the head of the list
 * @index: The index of the node to delete (starting at 0)
 *
 * Return: 1 if successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *prev, *target, *next;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
target = *head;
*head = (*head)->next;
free(target);
return (1);
}
prev = *head;
for (i = 0; prev != NULL && i < (index - 1); i++)
prev = prev->next;

if (prev == NULL)
return (-1);

target = prev->next;
next = target->next;
prev->next = next;
free(target);
return (1);
}
