#include "lists.h"
#include <stdio.h>


/**
 * print_listint - Prints all the elements of a listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
size_t len = 0;
listint_t *temp;
temp = (listint_t *)h;
while (temp != NULL)
{
printf("%d\n", temp->n);
len++;
temp = temp->next;
}
return (len);
}
