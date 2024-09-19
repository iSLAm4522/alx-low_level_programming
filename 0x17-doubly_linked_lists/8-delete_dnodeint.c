#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - Deletes the node at index of a dlistint_t
 * linked list.
 * @head: Double pointer to the head of the doubly linked list
 * @index: Index of the node to delete, starting from 0
 *
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *target;
unsigned int i;
if (*head == NULL)
return (-1);
if (index == 0)
{
target = *head;
*head = (*head)->next;
if (*head != NULL)
(*head)->prev = NULL;
free(target);
return (1);
}
target = *head;
for (i = 0; target != NULL && i < index; i++)
target = target->next;

if (target == NULL)
return (-1);

target->prev->next = target->next;
if (target->next != NULL)
target->next->prev = target->prev;
free(target);
return (1);
}
