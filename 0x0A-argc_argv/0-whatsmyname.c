#include <stdio.h>
#include "main.h"
/**
  * main - starting point, name of program
  * @argc: counts the number of arguments passed
  * @argv: array of the string arguments
  * Return: Always 0
  */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
