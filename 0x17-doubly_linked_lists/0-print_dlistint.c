#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list
 *
 * Return: The number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
dlistint_t *temp = (dlistint_t *)h;
size_t len = 0;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
len++;
}
return (len);
}
