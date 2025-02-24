#include "main.h"

/**
 * rot13 - rot13 cypher
 * @aStr: string to be encrypted.
 *
 * Return: pointer to converted string
 */
char *rot13(char *aStr)
{
	int i;

	for (i = 0; aStr[i] != '\0'; i++)
	{
		while ((aStr[i] >= 'A' && aStr[i] <= 'Z') ||
			   (aStr[i] >= 'a' && aStr[i] <= 'z'))
		{
			if ((aStr[i] >= 'A' && aStr[i] <= 'M') ||
				(aStr[i] >= 'a' && aStr[i] <= 'm'))
			{
				aStr[i] += 13;
				break;
			}

			aStr[i] -= 13;
			i++;
		}
	}

	return (aStr);
}
