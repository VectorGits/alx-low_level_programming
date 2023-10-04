#include "main.h"

/**
 * main - program that copies the content of a file to another file.
 * file_from: file to copy from.
 * file_to: file to copy to.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success else exit status on failure.
 */
int main(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @argc: number of arguments passed to the program.
 * @argv: array of pointers to arguments.
 * Return: 0 on success else exit status on failure.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, res;
	ssize_t no_chars, no_write;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	no_chars = 1024;
	while (no_chars == 1024)
	{
		no_chars = read(file_from, buf, 1024);
		if (no_chars == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		no_write = write(file_to, buf, no_chars);
		if (no_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	res = close(file_from);

	if (res == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	res = close(file_to);
}