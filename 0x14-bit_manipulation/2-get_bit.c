#include "main.h"
#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the value
 * @index: the index given
 * Return: value of the bit at index index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	return ((n & mask) != 0);
}
