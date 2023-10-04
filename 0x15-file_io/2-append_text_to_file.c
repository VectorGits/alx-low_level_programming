#include "main.h"

/**
 * append_text_to_file - func that appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: null terminated string to be written into file.
 *
 * Return: 1 on success else -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	ssize_t res;

	if (filename == NULL)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);
	if (fn == -1)
		return (-1);

	if (text_content != NULL)
	{
		res = write(fn, text_content, strlen(text_content));
		if (res == -1)
		{
			close(fn);
			return (-1);
		}
		else
		{
			close(fn);
			return (1);
		}
	}
}