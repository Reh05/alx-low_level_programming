#include "main.h"
/**
  * _strchr - locates a character in a string
  * @s: the string
  * @c: the character
  * Return: the pointer or null if not found
  */
char *_strchr(char *s, char c)
{
	int k = 0;

	for (; s[k] >= '\0'; k++)
	{
		if (s[k] == c)
			return (&s[k]);
	}
	return (0);
}
