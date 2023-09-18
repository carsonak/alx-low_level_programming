#include "main.h"

/**
 *_strcpy - copies a string to a buffer
 *@src: the string to be copied
 *@dest: pointer to buffer
 *
 *Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	int a, i;

	a = strlen(src);

	i = 0;
	while  (i <= a)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
