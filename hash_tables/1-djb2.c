#include "hash_tables.h"

/**
 * hash_djb2 -  a hash function implementing the djb2 algorithm.
 * @str: string
 * Return: return
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_table;
	int c;

	hash_table = 5381;
	while ((c = *str++))
	{
		hash_table = ((hash_table << 5) + hash_table) + c; /* hash_table * 33 + c */
	}
	return (hash_table);
}
