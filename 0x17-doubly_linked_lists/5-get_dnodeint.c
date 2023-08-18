#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: pointer
 * @index: index of the nth node
 * Return: NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;
	dlistint_t *present;

	if (head == NULL)
		return (NULL);

	present = head;
	for (y = 0; present != NULL && y < index; y++)
	{
		present = present->next;
	}
	return (present);
}
