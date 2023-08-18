#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head pointer
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
