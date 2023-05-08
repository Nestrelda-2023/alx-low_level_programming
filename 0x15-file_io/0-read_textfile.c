#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file that's being read
 * @letters: number of letters to be read
 * Return: wr- the number of bytes read and printed
 *        0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t wr;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (wr);
}
