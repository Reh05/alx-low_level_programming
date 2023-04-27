#include <stdio.h>
#include "lists.h"
/**
  * print_list - displays list_t list
  * @h: pointer to list_t list
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%u %s\n", h->len, h->str);
	}
	count++;
	h = h->next;

	return (count);
}
