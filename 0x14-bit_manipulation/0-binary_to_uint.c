#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * binary_to_uint - changes binary to an unsigned integer
 * @b: pointer
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		sum <<= 1;
		sum += b[i] - '0';
	}
	return (sum);
}
