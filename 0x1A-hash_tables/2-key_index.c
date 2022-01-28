#include "hash_tables.h"

/**
 *key_index - Gives the index of a key.
 *@key: The Key.
 *@size: Size of the array of the hash table.
 *
 *Return: Index at which the value pair shold be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
