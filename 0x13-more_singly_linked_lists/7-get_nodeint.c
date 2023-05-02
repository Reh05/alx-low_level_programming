#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * get_nodeint_at_index - nth node of a listint_t
  * @head: pointer to the first node
  * @index: the node, starting at 0
  * Return: pointer nth node or NULL if node doesn't NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	for (k = 0; head != NULL && k < index; k++)
		head = head->next;
	{
		return ((head == NULL || k < index) ? NULL : head);
	}
}
