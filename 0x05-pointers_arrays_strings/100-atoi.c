#include "main.h"

/**
 *_atoi - converts a string to numbers
 *@s: the string
 *
 *Return: the numbers in the string or 0 if none.
 */

int _atoi(char *s)
{
	int sLen, i, signN, a;

	sLen = strlen(s) - 1;
	signN = 0;
	a = 0;

	/*Checks for the signs before the first integer*/
	for (i = 0; i <= sLen; i++)
	{
		/*If an integer is encountered the loop breaks*/
		if (*(s + i) >= '0' && *(s + i) <= '9')
			break;
		else if (*(s + i) == '-')
			signN++;
	}

	/*Checks for integers in the string*/
	for (i = 0; i <= sLen; i++)
	{
		/*Checks if the character following an integer is still an int*/
		if (*(s + (i - 1)) >= '0' && *(s + (i - 1)) <= '9' &&
		    !(*(s + i) >= '0' && *(s + i) <= '9'))
			break;
		else if (a == 214748364 && *(s + i) == 8)
			break;
		if (*(s + i) >= '0' && *(s + i) <= '9')
			a = (a * 10) + (*(s + i) - '0');
	}

	/*Turns the number to a negative if the total "-" are odd*/
	if (signN % 2 != 0 && signN != 0)
	{
		a = -a;
	}
	if (a == -214748364 && *(s + i) == 8)
		return ((a * 10) + 8);
	else
		return (a);
}
