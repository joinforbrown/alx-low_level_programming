#include "hash_tables.h"

/**
 * Return: The calculated hash.
 *
 *  @str: The string to hash.
 *  hash_djb2 - Hash function implementing the djb2 algorithm.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
