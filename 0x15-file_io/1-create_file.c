#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: content of the file
 * Return: 1 on success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, write_return;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT |
		O_RDWR | O_TRUNC | 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		write_return = write(fd, text_content, len);
		if (write_return == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
