#include "hash_tables.h"
/**
 *hash_tables_create - Creates a hash table.
 *@size: Size of the array
 *
 *Return: A pointer to the newly created hash tables. of fails NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;
	unsigned long int i = 0;

	hash_table = malloc(sizeof(hash_table_t) * 1);
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		return (NULL);
	}
	for (; i < size ; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
