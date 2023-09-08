#include<stdlib.h>
#include "hash_tables.h"

/**
 *hash_table_create - creating hash table
 *@size: integer type size of an array aka hash table
 *
 *Return: hash always sucess Null when fail
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash;

	if (size <= 0) /* size must be a positive number */
		return (NULL);

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
{
	free(hash);
	return (NULL);
}
	hash->size = size;

	for (i = 0; i < size; i++)
	{
	hash->array[i] = NULL;
	}
return (hash);
}
