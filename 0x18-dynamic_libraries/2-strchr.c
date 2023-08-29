#include "main.h"
#include <stdio.h>

/**
 * *_strchr - finds a character in a string
 * @s: string to look into
 * @c: char to find
 *
 * Return: a pointer to the first appearence of the character
 */
char *_strchr(char *s, char c)
{
		int h;

		while (1)
		{
			h = *s++;
			if (h == c)
			{
				return (s - 1);
			}
			if (h == 0)
			{
				return (NULL);
			}
		}
}
