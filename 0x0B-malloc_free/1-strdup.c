#include <stdlib.h>
#include "main.h"
/**
  * _strdup - returns a pointer to a new string
  * @str: the string
  * Return: NULL if str = NULL
  */
char *_strdup(char *str)
{
	int a = 0;
	int b = 1;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[b])
		b++;
	c = malloc(b * sizeof(char) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	while (a < b)
	{
		c[a] = str[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
