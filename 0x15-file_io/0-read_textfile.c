#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 if there was an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fn, read_len, write_len;
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

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(fn);
        return (0);
    }

    read_len = read(fn, buf, letters);
    if (read_len == -1)
    {
        free(buf);
        close(fn);
        return (0);
    }

    write_len = write(STDOUT_FILENO, buf, read_len);
    free(buf);
    close(fn);

    if (write_len != read_len)
    {
        return (0);
    }

    return (read_len);
}