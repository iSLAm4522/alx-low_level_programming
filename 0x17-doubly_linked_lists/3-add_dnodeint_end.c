#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the doubly linked list
 * @n: The value to add in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
new_node->prev = temp;
temp->next = new_node;
return (new_node);
}
