#include <stdlib.h>
#include "main.h"
/**
  * create_array - create arrays of chars
  * @size: size of arrays
  * @c: the char
  * Return: NULL if size = 0
  * a pointer to the array, or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *b;

	if (size == 0)
	{
		return (NULL);
	}
	b = malloc(size * sizeof(char));
	if (b == NULL)
	{
		return (NULL);
	}
	while (a < size)
	{
		b[a] = c;
		a++;
	}
	return (b);
}
