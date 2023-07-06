#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: start number
 * @m: final number
 * Return: numbers of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num_of_bits = 0;

	while (n || m)
	{
		if ((n ^ m) & 1)
			num_of_bits++;
		n >>= 1;
		m >>= 1;
	}
	return (num_of_bits);
}
