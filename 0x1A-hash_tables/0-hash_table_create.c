#include "hash_tables.h"
/**
 * hash_table_create - Function to create a Hash table
 * @size: Parameter
 * Return: Return Null fail or new table in success
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (size <= 0)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t) * 1);
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array =  calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	return (hash_table);
}
