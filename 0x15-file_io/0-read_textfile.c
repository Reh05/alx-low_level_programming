#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * read_textfile -  reads a text file and prints it to the POSIX
  * @filename: pointer to filename
  * @letters: the number of letters it should read and print
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t l;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	l = write(STDOUT_FILENO, buffer, t);
	{
		free(buffer);
		close(fd);
		return (l);
	}
}
