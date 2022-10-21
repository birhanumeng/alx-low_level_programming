#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * key_index - Computes index of key in a hash table
  * @key: key
  * @size: size of the hash table
  *
  * Return: index of a key
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
