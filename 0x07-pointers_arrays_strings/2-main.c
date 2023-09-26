#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "";
	char *f;

	f = _strchr(s, '\0');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
	{
		printf("Error");
	}

	s = "Hello";
	f = _strchr(s, 'p');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
	{
		printf("Error\n");
	}

	s = "helLo";
	f = _strchr(s, 'L');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
	{
		printf("Error\n");
	}

	s = "Henlo";
	f = _strchr(s, '\0');
	if (f != NULL)
	{
		printf("%s\n", f);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
