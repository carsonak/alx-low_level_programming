#include "main.h"

/**
 * create_file - creates a file and adds content to it if any
 * @filename: name of file to be created
 * @text_content: content to be written to the file.
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wrt, lttrs = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[lttrs])
		lttrs++;

	wrt = write(fd, text_content, lttrs);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
