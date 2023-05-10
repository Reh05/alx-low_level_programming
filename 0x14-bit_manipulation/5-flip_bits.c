#include "main.h"
#include <stdlib.h>
/**
  * flip_bits - returns the number of bits you would need to flip
  * @n: the bit that comes first
  * @m: bit that comes second
  * Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int shift = (sizeof(n) * 8);
	int distance = 0;

	while (shift--)
		distance += (n >> shift & 1) != (m >> shift & 1);
	{
		return (distance);
	}
}
