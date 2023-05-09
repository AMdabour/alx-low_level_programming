#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read a file
 * @filename: the file name
 * @letters: numer of letters read
 * Return: num of letters read and print with write
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t bytes_read, bytes_written;
	char *buff;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL)
		fclose(fp);
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		fclose(fp);
		return (0);
	bytes_read = fread(buff, sizeof(char), letters, fp);
	if (bytes_read == 0 || ferror(fp))
		free(buff);
		fclose(fp);
		return (0);
	bytes_written = write(STDOUT_FILENO, buff, bytes_read);
	if (bytes_wrutten != bytes_read)
		free(buff);
		fclose(fp);
		return (0);

	free(buff);
	fclose(fp);

	return (bytes_written);
}
