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

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	else if (s1 == NULL)
	{
		bGstr = malloc((sizeof(*s2) * strlen(s2)) + 1);
		if (bGstr == NULL)
			return (NULL);

		for (i = 0; i <= strlen(s2); i++)
			bGstr[i] = s2[i];
	}
	else if (s2 == NULL)
	{
		bGstr = malloc((sizeof(*s1) * strlen(s1)) + 1);
		if (bGstr == NULL)
			return (NULL);

		for (i = 0; i <= strlen(s1); i++)
			bGstr[i] = s1[i];
	}
	else
	{
		bGstr = malloc((sizeof(*s1) * (strlen(s1) + strlen(s2))) + 1);
		if (bGstr == NULL)
			return (NULL);

		for (i = 0; *s1 != '\0'; i++, s1++)
			bGstr[i] = *s1;

		for (; *s2 != '\0'; i++, s2++)
			bGstr[i] = *s2;

		bGstr[i] = '\0';
	}
	return (bGstr);
}
