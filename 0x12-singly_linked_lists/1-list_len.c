#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
  * list_len- length of list
  * @h: pointer to first node
  * Return: the number of elements
  */
size_t list_len(const list_t *h)
{
	unsigned int j = 0;

	while (h != NULL)
	{
		j++;
		h = h->next;
	}
	return (j);
}
