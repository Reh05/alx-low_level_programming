#include "main.h"
/**
  * _memcpy - copies memory area
  * @dest: destination
  * @src: source
  * @n: number of bytes
  * Return: pointer to destination
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int j = n;

	for (; p < j; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
