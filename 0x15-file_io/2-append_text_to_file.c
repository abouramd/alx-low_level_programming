#include "main.h"

/**
 * append_text_to_file - append text file
 * @filename: file name
 * @text_content: content to append to the file
 * Return: -1 if an error or 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd < 0)
		return (-1);
	if (text_content)
		write(fd, text_content, strlen(text_content));
	return (1);
}
