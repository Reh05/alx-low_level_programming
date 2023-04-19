#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - operation that adds 2 numbers
  * @a: first num
  * @b: second num
  * Return: sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - operation to subtract 2 numbers
  * @a: sirst num
  * @b: second num
  * Return: the difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - operation to multiply 2 numbers
  * @a: first num
  * @b: second num
  * Return: the product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - operation to divide 2 numbers
  * @a: first num
  * @b: second num
  * Return: quotient
  */
int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - operation to return remainder
  * @a: first number
  * @b: second number
  * Return: remainer after dividing
  */
int op_mod(int a, int b)
{
	return (a % b);
}
