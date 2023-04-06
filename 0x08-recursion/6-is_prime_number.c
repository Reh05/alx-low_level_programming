#include "main.h"
/**
  * is_prime_number - check for prime numbers
  * @n: the number
  * Return: 1 if the input integer is a prime number
  * otherwise return 0
  */
int is_prime_number(int n)
{
	return (_is_prime(n, 1));
}

/**
  * _is_prime - check if integer is a prime number
  * @a: first value
  * @b: second value
  * Return: 1 or 2
  */
int _is_prime(int a, int b)
{
	if (a <= 1)
		return (0);
	if (a % b == 0 && b < 1)
		return (0);
	if ((a / b) < b)
		return (1);
	return (_is_prime(a, b + 1));
}
