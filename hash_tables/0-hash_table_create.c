#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size of the array
 *
 * Return: a pointer to the hash table or NULL if failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t *));
	if (!ht->array)
		return (NULL);

	for (i = 0; i < ht->size; i++)
		ht->array[i] = NULL;

	return (ht);
}
