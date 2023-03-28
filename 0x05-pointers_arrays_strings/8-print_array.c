#include "main.h"
#include <stdio>
/**
  * print_array - prints an array of integers
  * @n: the number of elements in the array to be printed
  * @a array
  * Return: array
  */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}
	printf('\n')
}
