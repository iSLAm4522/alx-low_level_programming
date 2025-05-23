#include "lists.h"
/**
 * listint_len - Returns the number of elements in a listint_t list
 * @h: A pointer to the head of the list
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
size_t len = 0;
listint_t *temp;
temp = (listint_t *)h;
while (temp != NULL)
len++, temp = temp->next;
return (len);
}
