#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to one at a given index
 * @n: pointer to value
 * @index: the index given
 * Return: 1 if it worked, or -1 if an error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1UL << index;

	*n |= mask;

	return (1);
}
