#include "main.h"
/**
  * _sqrt_recursion - returns the natural square root of a number
  * @n: the number
  * Return: -1 if n has no natural sqrt or sqrt of n
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - returns sqrt of numbers
  * @a: first value
  * @b: second value
  * Return: an integer
  */
int _sqrt(int a, int b)
{
	int s = b * b;

	if (s > a)
		return (-1);
	if (s == a)
		return (b);
	return (_sqrt(a, b + 1));
}
