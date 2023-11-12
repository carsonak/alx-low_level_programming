#include "main.h"

/**
 *_strcpy - copies a string to a buffer
 *@src: the string to be copied
 *@dest: pointer to the buffer
 *
 *Return: pointer to the buffer
 */

char *_strcpy(char *dest, char *src)
{
	unsigned long int a, i;

	a = strlen(src);
	for (i = 0; i <= a; i++)
		*(dest + i) = *(src + i);

	return (dest);
}
