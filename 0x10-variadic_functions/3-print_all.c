#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - prints anything
  * @format: list of types of arguments passed to function
  * Return: nothing
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;
	va_start(list, format);
	{
		if (format)
		{
			while (format)
			{
				switch (format[i])
				{
					case 'c':
						printf("%s%d", sep, va_arg(list, int));
				}
			}
		}
	}
}
