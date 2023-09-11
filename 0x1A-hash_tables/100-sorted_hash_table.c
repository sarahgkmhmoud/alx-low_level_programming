#include"hash_tables.h"
/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the hash table.
 *
 * Return: A pointer to the created hash table, or NULL on failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *newtable;

	if (size <= 0)
	return (NULL);

	newtable = malloc(sizeof(shash_table_t));
	if (newtable == NULL)
	return (NULL);
	newtable->size = size;

	newtable->array = malloc(sizeof(shash_node_t *) * size);
	if (newtable->array == NULL)
	{
	free(newtable);
	return (NULL);
	}
	newtable->shead = NULL;
	newtable->stail = NULL;
	return (newtable);
}
/**
 *creat_nodes - creat the node
 *@key: the key to insert
 *@value: the value to insert
 *Return: newnode always sucsess
*/
shash_node_t *creat_nodes(const char *key, const char *value)
{
shash_node_t *new_node;

new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
	free(new_node->key);
	free(new_node);

	return (NULL);
	}
	return (new_node);
}
/**
 * shash_table_set - Inserts a key/value pair into a sorted hash table.
 * @ht: The hash table.
 * @key: The key to insert.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *array;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array[index];

		while (array)
	{
		if (strcmp(array->key, key) == 0)
		{
			free(array->value);
		array->value = strdup(value);
		if (array->value == NULL)
			return (0);
		return (1);
		}
		array = array->next;
	}
		new_node = creat_nodes(key, value);
		if (new_node == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		/* No collision, insert as the first node */
		ht->array[index] = new_node;
	}
	else
	{
		/* Collision, append to the end of the linked list */
		shash_node_t *current = ht->array[index];
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	/*	ht->array[index] = handledupindex(ht, key, index, new_node);*/
if (handlesortlink(ht, key, index) != 1)
{
	/*free*/
	return (0);
}
	return (1);
}
/**
 *handledupindex - handle the index
 *@ht: hash table
 *@key: insert key
 *@index: integer the index
 *@new_node: insert new node
 *Return: shash_node_t always success
*/
shash_node_t *handledupindex(shash_table_t *ht, const char *key,
unsigned long int index, shash_node_t *new_node)
	{
		 shash_node_t *current = ht->array[index];
		shash_node_t *prev = NULL;


		while (current != NULL && strcmp(key, current->key) > 0)
		{
			prev = current;
			current = current->next;
		}

		if (prev == NULL)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else
		{
			prev->next = new_node;
			new_node->next = current;
		}
		return (ht->array[index]);
	}
/**
 *handlesortlink - handle the sort link
 *@ht: hash table
 *@key: insert to key
 *@index: index is integer
 *Return: 1 always success
*/
int handlesortlink(shash_table_t *ht, const char *key, unsigned long int index)
	{
	  shash_node_t *current;
	if (ht->shead == NULL)
	{
		ht->shead = ht->array[index];
		ht->stail = ht->array[index];
	}
	else if (strcmp(key, ht->shead->key) < 0)
	{
		ht->array[index]->snext = ht->shead;
		ht->shead->sprev = ht->array[index];
		ht->shead = ht->array[index];
	}
	else if (strcmp(key, ht->stail->key) > 0)
		{
		ht->array[index]->sprev = ht->stail;
			ht->stail->snext = ht->array[index];
			ht->stail = ht->array[index];
		}
	else
	{
		current = ht->shead->snext;
		while (current != NULL && strcmp(key, current->key) > 0)
		{
			current = current->snext;
		}

	   ht->array[index]->sprev = current->sprev;
	   ht->array[index]->snext = current;
		current->sprev->snext = ht->array[index];
		current->sprev = ht->array[index];
	}
		return (1);
	}
/**
* shash_table_get - Retrieves the value associated with a key.
* @ht: The hash table.
* @key: The key to search for.
*
* Return: The value associated with the key, or NULL if the key is not found.
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{

	unsigned long int index;
	shash_node_t *checker_key;
	shash_node_t *current;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	current = ht->shead;
while (current)
	{
	checker_key = ht->array[index];
	while (checker_key)
	{
		if (strcmp(checker_key->key, key) == 0)
		{
		return (checker_key->value);
		}
		checker_key = checker_key->next;
	}
		if (ht->array[index] == NULL)
			return (NULL);
		return (ht->array[index]->value);

	current = current->next;
	}
		return (NULL);
}
/**
 * shash_table_print - Prints the sorted hash table.
 * @ht: The hash table.
 */
void shash_table_print(const shash_table_t *ht)
{

	shash_node_t *checker_key;

	if (ht == NULL)
		return;
	checker_key = ht->shead;

		printf("{");


	while (checker_key)
		{

		printf("'%s': '%s'", checker_key->key, checker_key->value);
		checker_key = checker_key->snext;

	if (checker_key != NULL)
		printf(", ");
		}
		printf("}\n");
	}
/**
 * shash_table_print_rev - Prints the sorted hash table in reverse order.
 * @ht: The hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
shash_node_t *checker_key;

	if (ht == NULL)
		return;
	checker_key = ht->stail;

		printf("{");


	while (checker_key)
		{
		printf("'%s': '%s'", checker_key->key, checker_key->value);
		checker_key = checker_key->sprev;

		if (checker_key != NULL)
			printf(", ");
		}

		printf("}\n");

}
/**
 * shash_table_delete - Deletes the sorted hash table and its contents.
 * @ht: The hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
