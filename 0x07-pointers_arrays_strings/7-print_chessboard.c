#include "main.h"
/**
  * print_chessboard - prints the chessboard
  * @a: array
  * Return: always 0
  */
void print_chessboard(char (*a)[8])
{
	int g;
	int b;

	for (g = 0; g < 8; g++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[g][b]);
		_putchar('\n');
	}
}
