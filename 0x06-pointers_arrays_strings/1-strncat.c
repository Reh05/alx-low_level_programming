#include "main.h"
/**
  * _strncat - concatenates two strings
  * usin n at most bytes for srci
  * @n: bytes
  * @src: source
  * @dest: destination
  * Return: pointer to resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int r;
	int s;

	r = 0;
	while (dest[r] != '\0')
	{
		r++;
	}
	s = 0;
	while (s < n && src[s] != '\0')
	{
		dest[r] = src[s];
		r++;
		s++;
	}
	dest[r] = '\0';
	return (dest);
}
