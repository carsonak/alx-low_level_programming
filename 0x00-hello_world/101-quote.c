#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

/**
 * main - prints text to standard output
 *
 * Return: (1) if successful.
 */
int main(void)
{
	/*int fd;*/
	char buffer[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	/**
	 *fd = open("/root/repositories/alx-low_level_programming/
	 *0x00-hello_world/test.txt", O_RDWR);
	 */
	write(STDOUT_FILENO, buffer, strlen(buffer));
	/*close(fd);*/
	return (1);
}
