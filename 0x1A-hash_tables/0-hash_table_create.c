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
	unsigned int i;
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	return (NULL);


	for (i = 0; i < size; i++)
	{
	hash->array[i] = NULL;
	}
	hash->size = size;
return (hash);
}
