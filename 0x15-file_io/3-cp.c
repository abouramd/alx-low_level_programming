#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * read_write_textfile - read write text file
 * @rfilename: file name
 * @wfilename: file name
 * Return: -1 if an error or 1
 */

ssize_t read_write_textfile(const char *rfilename, const char *wfilename)
{
	ssize_t i;
	int wfd;
	int rfd;
	char c[1025];

	if (!*wfilename)
		return (0);
	rfd = open(rfilename, O_RDONLY);
	if (rfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", rfilename);
		return (98);
	}
	wfd = open(wfilename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR \
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	while (wfd > 0 && (i = read(rfd, c, 1024)))
		if (i == -1 || (i = write(wfd, c, i)) == -1)
			break;
	if (i == -1 || wfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", wfilename);
		return (99);
	}
	if (close(rfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rfd);
		return (100);
	}
	if (close(wfd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", wfd);
		return (100);
	}
	return (0);
}


/**
 * main - start
 * @ac: num of args
 * @av: args of programe
 * Return: 0 or other value if an error happen
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}
	return (read_write_textfile(av[1], av[2]));
}

