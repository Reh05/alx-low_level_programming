#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointing to a string of 0 and 1 chars
  * Return: the converted number, or 0 if
  * there is one or more chars in the string b that is not 0 or 1
  * b is NULL
  */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);
	{
		unsigned int binary_to_uint = 0;

		while (*b != '\0')
		{
			if (*b != '0' && *b != '1')
			{
				return (0);
			}
			binary_to_uint = binary_to_uint * 2 + (*b - '0');
			b++;
		}
		return (binary_to_uint);
	}
}
