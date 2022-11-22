#include "main.h"

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: file to append
 * @text_content: string to add at the end of a file
 *
 * Return: 1 if success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd, len, wd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_EXCL | O_APPEND);

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
