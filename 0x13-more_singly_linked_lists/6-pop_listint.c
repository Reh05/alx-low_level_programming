#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: pointer to first node
  * Return: the head node’s data (n)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
