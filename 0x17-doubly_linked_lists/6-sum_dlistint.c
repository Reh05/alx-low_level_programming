#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: pointer
 * Return: if the list is empty 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *present;

	present = head;
	while (present != NULL)
	{
		sum += present->n;
		present = present->next;
	}
	return (sum);
}
