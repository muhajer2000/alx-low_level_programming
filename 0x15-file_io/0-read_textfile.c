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
	char buffer[READ_BUF_SIZE * 8];

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, &buffer[0], letters);
	n = write(STDOUT_FILENO, &buffer[0], n);
	close(fd);
	return (n);
}
