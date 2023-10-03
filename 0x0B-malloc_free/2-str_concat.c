#include "main.h"

/**
 * str_concat - concatinates 2 strings and stores them in a new array.
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: a pointer to the new string, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *bGstr;
	unsigned long int i;

	if (s1 == NULL)
	{
		bGstr = malloc(sizeof(*s2) * strlen(s2));

		if (bGstr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i <= strlen(s2); i++)
			bGstr[i] = s2[i];
	}
	else if (s2 == NULL)
	{
		bGstr = malloc(sizeof(*s1) * strlen(s1));

		if (bGstr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i <= strlen(s2); i++)
			bGstr[i] = s1[i];
	}
	else
	{
		bGstr = malloc(sizeof(*s1) * (strlen(s1) + strlen(s2) - 1));

		if (bGstr == NULL)
		{
			return (NULL);
		}

		i = 0;
		while (*s1 != '\0')
		{
			bGstr[i] = *s1;
			i++;
			s1++;
		}

		while (*s2 != '\0')
		{
			bGstr[i] = *s2;
			i++;
			s2++;
		}

		bGstr[i] = '\0';
	}

	return (bGstr);
}
