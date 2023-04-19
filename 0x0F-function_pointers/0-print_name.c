#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - prints a name
  * @name: pointer to name
  * @f: pointer to function
  * Return: always nothing
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
			return;
	f(name);
}
