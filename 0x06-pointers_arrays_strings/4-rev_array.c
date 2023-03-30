#include "main.h"
/**
  * reverse_array - reverses the content of an array of integers
  * @n: number of elements of the array
  * @a: array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int r;
	int s;

	for (r = 0; r < n--; r++)
	{
		s = a[r];
		a[r] = a[n];
		a[n] = s;
	}
}
