#include "main.h"

/**
 * read_textfile - reads textfile and prints it to the stdout
 * @filename: to read
 * @letters: number of letters that should be read and print
 *
 * Return: letter's number of letters it could read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wd;
	char *tmp = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (tmp == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, tmp, letters);
	if (rd == -1)
		return (0);

	wd = write(STDOUT_FILENO, tmp, rd);
	if (wd == -1)
		return (0);

	free(tmp);
	close(fd);
	return (wd);
}
