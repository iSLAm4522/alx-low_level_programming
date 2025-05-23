#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
dlistint_t *temp = (dlistint_t *)h;
while (temp != NULL)
temp = temp->next, len++;
return (len);
}
