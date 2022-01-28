#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table.
 * Return: Void. Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *New;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index])
		{
			New = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = New;
		}
	}
	free(ht->array);
	free(ht);
}
