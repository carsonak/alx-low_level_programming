#include "main.h"

/**
 *_strspn - checks for similar characters in different strings
 *@s: String to be checked
 *@accept: the check string
 *
 *Return: the total size of checked strings.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int b = 0;

	for (i = 0; i < strlen(accept); i++)
		for (j = 0; j < strlen(s); j++)
			if (accept[i] == s[j])
				b++;
	return (b);
}
