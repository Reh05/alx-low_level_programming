#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_numbers - prints numbers follow by a new line
  * @separator: to string to be printed
  * @n: count of number
  * @...: numbers to be printed
  * Return: a new line
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int j;

	va_start(nums, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(nums, int));

		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
