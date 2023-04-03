#include "main.h"
/**
  * _memset - fills memory with a constant byte
  * @b: constant byte
  * @s: pointer
  * @n: numbers of bytes
  * Return: pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; j > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
