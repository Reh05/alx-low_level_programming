#include "main.h"
/**
  * print_alphabet_x10 - print alphabet 10 times
  * main - Entry point
  * Return: Always 0
  */
void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 0; i <= 9; i++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}

