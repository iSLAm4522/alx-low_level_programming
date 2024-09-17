#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer to the list_t list
 *
 * Description: This function traverses the list_t linked list
 * and counts the number of nodes in it. It returns the total
 * number of nodes found.
 *
 * Return: The number of nodes in the list.
 */

size_t list_len(const list_t *h)
{
list_t *temp;
size_t len = 0;
if (h == NULL)
return (len);
temp = (list_t *)h;
while (temp != NULL)
{
len++;
temp = temp->next;
}
return (len);
}
