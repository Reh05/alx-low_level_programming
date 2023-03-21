#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  * @p: the number
  * Return: value of the last digit
  */
int print_last_digit(int p)
{
	int d = p % 10;

	if (d < 0)
		d *= -1;
	_putchar(d + '0');
	return (0);
}
