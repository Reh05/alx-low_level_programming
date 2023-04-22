#include <stdio.h>
#include "main.h"
/**
  * main - display number of arguments passed
  * @argc: argument count
  * @argv: argumet vector
  * Return: always 0
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
