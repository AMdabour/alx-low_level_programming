#include "main.h"

void close_helper(int fd1);
char *buffer_helper(char *fileto);

/**
 * main - entry point
 * @argc: num of arguments entered
 * @argv: arguments entered
 * Return: 1 on success or value of exit
 */
int main(int argc, char *argv[])
{
	char *buff;
	int fd1, fd2, ret1, ret2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = buffer_helper(argv[2]);
	fd1 = open(argv[1], O_RDONLY);
	ret1 = read(fd1, buff, 1024);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd1 == -1 || ret1 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		ret2 = write(fd2, buff, ret1);
		if (fd2 == -1 || ret2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		ret1 = read(fd1, buff, 1024);
		fd2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (ret1 > 0);

	free(buff);
	close_helper(fd1);
	close_helper(fd2);

	return (0);
}

/**
 * close_helper - close a file
 * @fd1: file descriptor for file 1
 */
void close_helper(int fd1)
{
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
}

/**
 * buffer_helper - create a buffer
 * @fileto: fileto
 * Return: buffer
 */
char *buffer_helper(char *fileto)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fileto);
		exit(99);
	}

	return (buffer);
}
