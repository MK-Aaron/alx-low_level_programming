#include "main.h"

/**
 * read_textfile - reads a text files and prints to stdout
 * @filename: file to be read
 * @letters: size of letters it should read
 * Return: number of letters it could read and print, if
 * fails to open file return 0, If file is NULL 0, If write
 * fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t able, out;
	int fd;
	char *buff;

	if (!filename) /* If NULL */
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	/* If NULL */
	if (!buff)
		return (0);

	able = read(fd, buff, letters);
	/* Check error */
	if (!able)
	{
		free(buff);
		return (0);
	}

	out = write(STDOUT_FILENO, buff, able);
	/* Check if write executes */
	if (!out)
		return (0);

	free(buff);
	close(fd);

	return (out);
}
