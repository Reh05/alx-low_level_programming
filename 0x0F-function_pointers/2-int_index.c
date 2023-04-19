#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: the array
  * @size: size of array
  * @cmp: pointer to the function to be used to compare values
  * Return: -1 If no element matches
  * -1 If size <= 0
  * otherwise zero
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	{
		if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);
	}
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
