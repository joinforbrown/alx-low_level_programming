#include <stdlib.h>
#include "main.h"

/****
 * @filename: the text file to be read .
 * @latters: the numbers of latters to be read.
 * Return: w- the number of bytes printed and read
 * 	0 when function fails.
 * read_textfile - read text file STDOUT to print.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;
	ssize_t t;
	ssize_t w;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}
