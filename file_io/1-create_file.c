#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file to create
 * @text_content: string that needs to be contain in the file
 *
 * Return: 1 if success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 00600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wd = write(fd, text_content, len);
		if (wd == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
