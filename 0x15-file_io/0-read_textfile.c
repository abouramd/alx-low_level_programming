#include "main.h"

/**
 * read_textfile - read text file
 * @filename: file name
 * @letters: number of letters
 * Return: 0 if an error or num of char you read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
	int fd;
	char c;

	if (!filename || !letters)
		return (0);
	i = 0;
	fd = open(filename, O_RDONLY, 0644);
	while (fd >= 0 && (size_t)i < letters && read(fd, &c, 1))
	{
		if (write(STDOUT_FILENO, &c, 1) == -1)
			return (0);
		i++;
	}
	close(fd);
	return (i);
}

