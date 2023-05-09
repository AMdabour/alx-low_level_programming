#include "main.h"

/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: content of the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_return;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
	}

	fd = open(filename, O_CREAT |
		O_RDWR | O_TRUNC | 0600);

	write_return = write(fd, text_content, len);

	if (fd == -1 || write_return == -1)
		return (-1);

	close(fd);

	return (1);
}
