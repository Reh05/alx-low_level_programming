#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: pointer to head of first node
  * @idx: where new node is added
  * @n: value of new node
  * Return: address of the new node, or NULL if it failed
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int g;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	{
		new->n = n;
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		for (g = 0; g < idx - 1; g++)
		{
			if (temp == NULL)
			{
				free(new);
				return (NULL);
			}
			temp = temp->next;
		}
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
}

