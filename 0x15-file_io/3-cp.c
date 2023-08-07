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

	if (!rfilename || !wfilename)
		return (-1);
	rfd = open(rfilename, O_RDONLY, 0644);
	if (rfd < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", rfilename);
		return (98);
	}
	wfd = open(wfilename, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (wfd < 0 && 10 > close(rfd))
	{
		fprintf(stderr, "Error: Can't write to %s\n", wfilename);
		return (99);
	}
	while ((i = read(rfd, c, 1024)))
	{
		write(wfd, c, i);
		if (i == -1)
			return (99);

	}
	if (close(rfd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", rfd);
		return (100);
	}
	if (close(wfd) == -1)
	{
		fprintf(stderr, "Error: Can't close fd %d\n", wfd);
		return (100);
	}
	return (0);
}


int main(int ac, char **av)
{
	if (ac != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		return (97);
	}
	return (read_write_textfile(av[1], av[2]));
}

