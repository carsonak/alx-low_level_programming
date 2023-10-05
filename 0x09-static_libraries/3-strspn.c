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
	unsigned long int i, j;
	unsigned int b, a = 0;

	for (i = 0; i < strlen(s); i++)
	{
		b = a;
		for (j = 0; j < strlen(accept); j++)
		{
			if (accept[j] == s[i])
			{
				a++;
			}
		}
		if (accept[j] == '\0' && a - b == 0)
		{
			break;
		}
	}

	return (a);
}
