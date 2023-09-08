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
	hash_node_t *checker_key;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	checker_key = ht->array[index];
	while (checker_key)
	{
		if (strcmp(checker_key->key, key) == 0)
		{
		return (ht->array[index]->value);
		}
		checker_key = checker_key->next;
	}


	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
