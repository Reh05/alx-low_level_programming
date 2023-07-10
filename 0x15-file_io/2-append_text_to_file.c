#include <stdio.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int xy;

	if (text_content == NULL)
		return (1);

	xy = open(filename, O_WRONLY | O_APPEND);

	if (xy == -1 || filename == NULL)
		return (-1);
	write(xy, text_content, strlen(text_content));

	close(xy);
	return (1);
}
