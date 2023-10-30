#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists (appending successs), -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, lttrs = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[lttrs])
			lttrs++;

		wrt = write(fd, text_content, lttrs);

		if (wrt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
