#include "main.h"

/**
 * create_file - write text file
 * @filename: file name
 * @text_content: content of the file
 * Return: -1 if an error or 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
