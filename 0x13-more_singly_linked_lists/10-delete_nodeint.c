#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * delete_nodeint_at_index - deletes the node at index
  * @head: pointer to head
  * @index: index of the node that should be deleted starting at 0
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int l;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;
	for (l = 0; l < index - 1 && current != NULL; l++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);
	{
		temp = current->next;
		current->next = temp->next;
		free(temp);
		return (1);
	}
}
