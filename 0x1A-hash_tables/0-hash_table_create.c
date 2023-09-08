#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: size of the array
 * Return: If an error occurs NULL Otherwise a pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		ht->array[j] = NULL;

	return (ht);
}
