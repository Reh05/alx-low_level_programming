#include "main.h"
#include <stdio.h>
/**
  * main - entry point
  * @argc: how many arguments there are
  * @argv: arguments
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	int i;

	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
		return (0);
	}
}
