#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the list_t list to print
 *
 * Description: This function iterates through the list_t linked list
 * and prints each node. If the string of a node is NULL, it prints
 * "[0] (nil)". Otherwise, it prints the string and its length in the
 * format "[len] str".
 * Return: The number of nodes in the list.
 */

size_t print_list(const list_t *h)
{
size_t count = 0;
char *str;

list_t *temp = (list_t *)h;
if (temp == NULL)
	return (count);
while (temp != NULL)
{
	str = temp->str;
	if (str == NULL)
	printf("[%d] %s\n", 0, "(nil)");
	else
	printf("[%d] %s\n", temp->len, str);
	temp = temp->next;
	count++;
}
return (count);
}
