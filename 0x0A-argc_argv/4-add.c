#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - display the name of the program
 * @argc: Count arguments
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (j = 1; j < argc; j++)
	{
		num = atoi(argv[j]);
		if (num == 0 && argv[j][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
