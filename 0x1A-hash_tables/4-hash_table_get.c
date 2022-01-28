#include "hash_tables.h"
/**
 *hash_table_get - Retrieves a value associated with a key.
 *@ht: Hash table to look into.
 *@key: Key to looking for.
 *
 *Return: Value associated with the element. NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *New = NULL;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	New = ht->array[index];
	while (New != NULL)
	{
		if (strcmp(New->key, key) == 0)
			return (New->value);
		New = New->next;
	}
	return (NULL);
}
