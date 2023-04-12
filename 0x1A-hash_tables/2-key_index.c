#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - get the index of a key in a hash table
 * @key: the key to look up
 * @size: the size of the hash table array
 *
 * Return: the index of the key in the hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /*Get the hash value for the key*/
unsigned long int hash = hash_djb2(key);
/* Calculate the index in the hash table array*/
unsigned long int index = hash % size;

return (index);
}
