#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * @filename: name of file
 * @letters: size of letters
 * Return: number of letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buf;

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters);
	n = read(fd, buf, letters);
	n = write(STDOUT_FILENO, buf, n);
	free(buf)
	close(fd);
	return (n);
}
