#include "hash_tables.h"
/**
 *hash_table_print - Prints a hash table.
 *@ht: Hash table.
 *Return: Void. Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i, Count = 0;
	hash_node_t *New = NULL;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i])
			continue;

		for (New = ht->array[i]; New; New = New->next)
		{
			if (Count > 0)
				printf(", ");
			printf("'%s': '%s'", New->key, New->value);
			Count++;
		}
	}
	printf("}\n");
}
