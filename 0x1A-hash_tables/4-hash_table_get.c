#include "hash_tables.h"
/**
 *hash_table_get - get the value
 *@ht: hash table
 *@key: the key
 *Return: value always success
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
