#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * sum_listint - returns the sum of all the data (n) of a listint_t
  * @head: pointer to head
  * Return: sum of all the data (n)
  */
int sum_listint(listint_t *head)
{
	int k = 0; /** k is the sum */

	while (head != NULL)
	{
		k += head->n;
		head = head->next;
	}
	return (k);
}
