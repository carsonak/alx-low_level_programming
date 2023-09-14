#include "main.h"
#include <unistd.h>

/**
 *_isdigit - check for uppercase characters.
 *@c: character to be checked
 *
 *Return: 1 if true, 0 if false.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
