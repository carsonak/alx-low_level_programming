#include "main.h"

/**
 *cap_string - capitalises only words of a string.
 *@a: string.
 *
 *Return: pointer to the new string.
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{

		if (wrdSep(a[i - 1]))
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] -= 32;
			}
		}
	}

	return (a);
}

/**
 *wrdSep - checks whether the character is a word separator.
 *@c: character to be checked.
 *
 *Return: boolean true or false.
 */
bool wrdSep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
			c == '.' || c == '!' || c == '?' || c == '\"' || c == '(' || c == ')' ||
			c == '{' || c == '}');
}
