#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * listint_len- length of number of elements in a linked
  * @h: pointer to first node
  * Return: number of elements in a linked
  */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		h = h->next;
		k++;
	}
	return (k);
}
