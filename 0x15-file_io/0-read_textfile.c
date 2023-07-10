#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file
 * @filename: pointer to the file with text
 * @letters: number of letters it should read and print
 * Return: zero if filename is NULL
 * if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(sizeof(char) * letters);
	int hg = open(filename, O_RDONLY);
	ssize_t len_letters;

	if (hg == -1)
		return (0);

	len_letters = read(hg, buf, letters);
	write(STDOUT_FILENO, buf, len_letters);

	if (close(hg) == -1)
		return (0);
	return (len_letters);
}
