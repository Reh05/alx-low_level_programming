#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(const char *s);

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second strig
  * Return: NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *output;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	i = _strlen(s1);
	j = _strlen(s2);

	output = malloc((i + j) * sizeof(*s1) + 1);
	if (output == 0)
		return (NULL);
	strcat(output, s1);
	strcat(output, s2);

	return (output);
}
/**
  * _strlen - length of the s string
  * @s: pointer
  * Return: string length
  */
int _strlen(const char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
