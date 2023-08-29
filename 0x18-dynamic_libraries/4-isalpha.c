#include "main.h"
#include <stdio.h>
/**
 * _isalpha - checks for alphabet char
 * @c: the char
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
