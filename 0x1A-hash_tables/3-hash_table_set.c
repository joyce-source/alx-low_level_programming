#include <stdlib.h>
#include <string.h>
#include "hash_table.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    // Check if the key or value is empty
    if (key == NULL || *key == '\0' || ht == NULL)
{
return 0;
}
    
    // Calculate the index for the key in the hash table
    unsigned long int index = key_index((unsigned char *)key, ht->size);
    
    // Create a new node for the key/value pair
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL) 
	{
        return 0;
	}
    new_node->key = strdup(key);
    if (new_node->key == NULL)
	{
        free(new_node);
        return 0;
	}
    new_node->value = strdup(value);
    if (new_node->value == NULL)
	{
        free(new_node->key);
        free(new_node);
        return 0;
	}
    new_node->next = NULL;
    
    // Add the new node to the hash table
    if (ht->array[index] == NULL)
	{
        ht->array[index] = new_node;
	}
	else
	{
        // Handle collisions by adding new node to the beginning of the list
        new_node->next = ht->array[index];
        ht->array[index] = new_node;
	}
    
    return 1;
}
