#include"hash_tables.h"
/**
*hash_table_print - print the hash table
*@ht: the hash table
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
int count = 0;
hash_node_t *temp;

if (ht == NULL)
return;

printf("{");
for (i = 0; i < ht->size; i++)
{

	temp = ht->array[i];
	while (temp)
	{
		if (count > 0)
		printf(", ");
	printf("\'%s\': \'%s\'", ht->array[i]->key, ht->array[i]->value);
	temp = temp->next;
	count++;
	}
}
printf("}\n");
}
