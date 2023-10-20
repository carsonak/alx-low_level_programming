#include "lists.h"

/**
 * print_list - prints all elemments in linked list
 * @h: pointer to first node
 *
 * Return: number of elements in linked list
 */
size_t print_list(const list_t *h)
{
	size_t i, count = 1;
	char *wrd, *null = "[0] (nil)";
	const list_t *ptr = h;

	while (ptr->next)
	{
		if (ptr->str)
		{
			wrd = str_fil(ptr->str, ptr->len);
			for (i = 0; wrd[i]; i++)
				_putchar(wrd[i]);

			free(wrd);
		}
		else
			for (i = 0; null[i]; i++)
				_putchar(null[i]);

		count++;
		ptr = ptr->next;
	}

	if (ptr->str)
	{
		wrd = str_fil(ptr->str, ptr->len);
		for (i = 0; wrd[i]; i++)
			_putchar(wrd[i]);

		free(wrd);
	}
	else
		for (i = 0; null[i]; i++)
			_putchar(null[i]);

	return (count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * str_fil - Formats the string of a linked list
 * @str: String
 * @len: Length of the string
 *
 * Return: pointer to new String
 */
char *str_fil(char *str, int len)
{
	int i, sLen = len;
	char *nStr;

	if (len > 9 && len < 100)
	{
		sLen += 7;
		nStr = malloc(sizeof(*nStr) * sLen);
		nStr[0] = '[';
		nStr[1] = (len / 10) + '0';
		nStr[2] = (len % 10) + '0';
		nStr[3] = ']';
		nStr[4] = ' ';
		for (i = 0, len = 5; str[i]; len++, i++)
			nStr[len] = str[i];

		nStr[len] = '\n';
		nStr[len + 1] = '\0';
	}
	else
	{
		sLen += 6;
		nStr = malloc(sizeof(*nStr) * sLen);
		nStr[0] = '[';
		nStr[1] = len + '0';
		nStr[2] = ']';
		nStr[3] = ' ';
		for (i = 0, len = 4; str[i]; len++, i++)
			nStr[len] = str[i];

		nStr[len] = '\n';
		nStr[len + 1] = '\0';
	}

	return (nStr);
}
