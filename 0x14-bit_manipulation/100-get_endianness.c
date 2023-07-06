#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: void
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *c = (char *) &y;

	return ((int) *c);
}
