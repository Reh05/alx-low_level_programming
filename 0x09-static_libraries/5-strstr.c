#include "main.h"
/**
  * _strstr - locates a substring
  * @haystack: the string
  * @needle: substring
  * Return: pointer to the beginning of the located substring
  * or NULL if the substring is not found
  */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *j = haystack;
		char *u = needle;

		while (*j == *u && *u != '\0')
		{
			j++;
			u++;
		}
		if (*u == '\0')
			return (haystack);
	}
	return (0);
}
