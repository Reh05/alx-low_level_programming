#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int m, e, j, len, k, digit;

	m = 0;
	e = 0;
	j = 0;
	len = 0;
	k = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (m < len && k == 0)
	{
		if (s[m] == '-')
			++e;
		if (s[m] >= '0' && s[m] <= '9')
			{
			digit = s[m] - '0';
			if (e % 2)
				digit = -digit;
			j = j * 10 + digit;
			k = 1;
			if (s[m + 1] < '0' || s[m + 1] > '9')
				break;
			k = 0;
			}
		m++;
	}
	if (k == 0)
		return (0);
	return (j);
}

/**
  * main - entry point
  * @argc: count of arguments received
  * @argv: argument vector
  * Return: 1 on error
  */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
		printf("Error\n");
	return (1);

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
