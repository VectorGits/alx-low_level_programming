#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to be read
 * @letters: number of letters to be read and printed out
 * 
 * Return: number of letters read and printed, else 0
*/

size_t read_textfile(const char *filename, size_t letters)
{
	int fn;
	ssize_t read_len, write_len;
	char *buf;


	if (filename == NULL)
	{
		return (0);
	}

	fn = open(filename, O_RDONLY);
	if (fn == -1)
	{
		return (0);
	}

	*buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fn);
		return (0);
	}
	read_len = read(fn, buf, letters);
	close(fn);
	if (read_len == -1)
	{
		free(buf);
		return (0);
	}
	write_len = write(STDOUT_FILENO, buf, read_len);
	free(buf);
	if (write_len != read_len)
	{
		return (0);
	}
	return (write_len);
}