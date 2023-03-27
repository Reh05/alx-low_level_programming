#include "main.h"
/**
  * swap_int - swaps values of a and b
  * @a: int a
  * @b: int b
  * Return: a and b
  */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
