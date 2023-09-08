#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int m;
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;

	for (m = 0; m < ht->size; m++)
	{
		if (ht->array[m] != NULL)
		{
			node = ht->array[m];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(head->array);
	free(head);
}
