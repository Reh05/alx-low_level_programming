#include <stdio.h>
#include <fcntl.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename:  name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 * if filename is NULL -1
 */
int create_file(const char *filename, char *text_content)
{
	int jk;

	jk = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 06);

	if (jk == -1 || filename == NULL)
		return (1);
	write(jk, text_content, strlen(text_content));

	close(jk);
	return (1);
}
