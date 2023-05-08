#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * read_textfile -  reads a text file and prints it to the POSIX
  * @filename: pointer to filename
  * @letters: the number of letters it should read and print
  * @fp: holds a reference to the open file
  * Return: the actual number of letters it could read and print
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);
	{
		FILE *fp = fopen(filename, "r");

		if (fp == NULL)
			return (0);
	}
	char *buffer = (char *)malloc(letters + 1);

	if (buffer == NULL)
		fclose(fp);
	return (0);
	{
		size_t bytes_read = fread(buffer, 1, letters, fp);

		if (bytes_read == 0)
			fclose(fp);
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0';
	size_t bytes_written = fwrite(buffer, 1, bytes_read, stdout);

	if (bytes_written != bytes_read)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (bytes_written);
}
