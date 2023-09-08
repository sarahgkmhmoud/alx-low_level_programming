#include"hash_tables.h"
/**
 *key_index - give you the index of a key
 *@key: the stord array in hash
 *@size: size of  the hash table array
 *Return: index always success
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int index = (hash_djb2(key)) % size;

return (index);
}
