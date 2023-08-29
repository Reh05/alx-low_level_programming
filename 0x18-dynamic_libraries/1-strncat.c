#include "main.h"

/**
 * _strncat - concatenates bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, j;

	s = 0;
	j = 0;

	while (dest[s] != '\0')
		s++;

	while (src[j] != '\0' && j < n)
	{
		dest[s] = src[j];
		s++;
		j++;
	}

	dest[s] = '\0';

	return (dest);
}
