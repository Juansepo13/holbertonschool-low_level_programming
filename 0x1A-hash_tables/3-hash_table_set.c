#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table.
 *@ht: Hash table to add or update the key/value to.
 *@key: The hash's key.
 *@value: Value associated with the key.
 *
 *Return: 1 if it success, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *NewNode = NULL;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] != NULL && strcmp(key, ht->array[index]->key) == 0)
	{
		free(ht->array[index]->value);
		ht->array[index]->value = strdup(value);
		return (1);
	}

	NewNode = malloc(sizeof(hash_node_t));
	if (!NewNode)
		return (0);

	NewNode->key = strdup(key);
	NewNode->value = strdup(value);
	NewNode->next = ht->array[index];
	ht->array[index] = NewNode;

	return (1);
}
