#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: the head
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0; /** counter initialization */

	if (h == NULL)
		return (x);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}
	return (x);
}
