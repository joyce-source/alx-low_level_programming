#include <stdlib.h>
#include "hash_table.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    // Get the hash value for the key
    unsigned long int hash = hash_djb2(key);
    
    // Calculate the index in the hash table array
    unsigned long int index = hash % size;
    
    return index;
}
