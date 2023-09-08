#include"hash_tables.h"
/**
*hash_table_print - print the hash table
*@ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{

	temp = ht->array[i];
	while (temp)
	{
	free(ht->array[i]);
	temp = temp->next;
	ht->array[i] = temp;
	}
	free(ht->array[i]);
}
}
