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
	char *bGstr = "";
	unsigned long int i = 0;

	if (!s1 && !s2)
		return (malloc(sizeof(*bGstr)));
	else if (!s1 && s2)
		bGstr = malloc((sizeof(*s2) * strlen(s2)) + 1);
	else if (s1 && !s2)
		bGstr = malloc((sizeof(*s1) * strlen(s1)) + 1);
	else
		bGstr = malloc((sizeof(*s1) * (strlen(s1) + strlen(s2))) + 1);

	if (!bGstr)
		return (NULL);

	if (s1)
		for (; *s1; i++, s1++)
			bGstr[i] = *s1;

	if (s2)
		for (; *s2; i++, s2++)
			bGstr[i] = *s2;

	bGstr[i] = '\0';

	return (bGstr);
}
