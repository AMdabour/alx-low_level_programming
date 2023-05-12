#include "main.h"

void close_helper(int fd1, int fd2);

/**
 * main - entry point
 * @argc: num of arguments entered
 * @argv: arguments entered
 * Return: 1 on success or value of exit
 */
int main(int argc, char *argv[])
{
	char buff[1024];
	int fd1, fd2, ret1, ret2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	ret1 = read(fd1, buff, 1024);

	if (fd1 == -1 || ret1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY | 0664);
	ret2 = write(fd2, buff, sizeof(buff));

	if (fd2 == -1 || ret2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close_helper(fd1, fd2);

	return (0);
}

/**
 * close_helper - close a file
 * @fd1: file descriptor for file 1
 * @fd2: file descriptor for file 2
 */
void close_helper(int fd1, int fd2)
{
	if (!close(fd1))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (!close(fd2))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}
