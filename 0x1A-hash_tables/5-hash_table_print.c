#include"hash_tables.h"
/**
*hash_table_print - print the hash table
*@ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
printf("{");
for (i = 0; i < ht->size; i++)
{
	if (ht->array[i] && i < ht->size - 1)
	printf("\'%s\': \'%s\', ", ht->array[i]->key, ht->array[i]->value);
	else if (ht->array[i] && i == ht->size - 1)
	printf("\'%s\': \'%s\'}", ht->array[i]->key, ht->array[i]->value);
}
}
