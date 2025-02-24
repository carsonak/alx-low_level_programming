#include "main.h"

/**
 * _isupper - check for uppercase characters.
 * @c: unsigned character ranging from a to z.
 *
 * Return: 1 if true, 0 if false.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
