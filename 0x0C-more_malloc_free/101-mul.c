#include "main.h"

/**
 * main - entry point of the program
 * @argc: the number of arguments received
 * @argv: an array of pointers to the arguments
 *
 * Return: 1 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	size_t i = 0, j = 0;
	char *results = NULL;

	if ((argc != 3) || (!_strlen(argv[1]) || !_strlen(argv[2])))
	{
		write(STDOUT_FILENO, "Error\n", 6);
		exit(98);
	}

	while (argv[1][i] || argv[2][j])
	{
		if (!argv[1][i])
			i--;

		if (!argv[2][j])
			j--;

		if (!isdigit(argv[1][i]) || !isdigit(argv[2][j]))
		{
			write(STDOUT_FILENO, "Error\n", 6);
			exit(98);
		}

		i++;
		j++;
	}

	results = infiX_mul(argv[1], argv[2]);
	if (!results)
		exit(EXIT_FAILURE);

	for (i = pad_char(results, "0"); results[i]; i++)
		_putchar(results[i]);

	_putchar('\n');
	free(results);
	return (EXIT_SUCCESS);
}

/**
 * infiX_mul - multiplies numbers stored in strings.
 * @n1: the first string with only decimals.
 * @n2: the second string with only decimals.
 *
 * Return: pointer to result, NULL on malloc fail or if both strings are empty
 */
char *infiX_mul(char *n1, char *n2)
{
	ssize_t top, botm, c_dgt;
	int byt_mul = 0;
	char *prod = NULL, *c_mul = NULL, *total = NULL;

	for (botm = (ssize_t)_strlen(n2) - 1; botm >= 0; botm--)
	{
		c_dgt = (ssize_t)_strlen(n1) + ((ssize_t)_strlen(n2) - botm);
		c_mul = malloc(sizeof(*c_mul) * (c_dgt + 1));
		if (!c_mul)
			return (NULL);

		c_mul = _memset(c_mul, '0', c_dgt);
		c_mul[c_dgt] = '\0';
		for (top = (ssize_t)_strlen(n1) - 1; top >= 0; top--)
		{
			byt_mul += ((n1[top] - '0') * (n2[botm] - '0'));
			c_mul[top + 1] = (byt_mul % 10) + '0';
			byt_mul /= 10;
		}

		c_mul[0] = (byt_mul % 10) + '0';
		byt_mul = 0;
		prod = infiX_add(total, c_mul);
		free(c_mul);
		if (total)
			free(total);

		if (!prod)
			return (NULL);

		total = prod;
	}

	return (prod);
}

/**
 * infiX_add - adds numbers stored in strings.
 * @n1: the first string with only decimals.
 * @n2: the second string with only decimals.
 *
 * Return: pointer to result, NULL on malloc fail or if both strings are empty
 */
char *infiX_add(char *n1, char *n2)
{
	ssize_t a = 0, b = 0, byt_sum = 0, sum_i = 0;
	char *sum = NULL;

	n1 += n1 ? pad_char(n1, "0") : 0;
	n2 += n2 ? pad_char(n2, "0") : 0;
	a = n1 ? (ssize_t)(_strlen(n1) - 1) : -1;
	b = n2 ? (ssize_t)(_strlen(n2) - 1) : -1;
	sum_i = (a > b) ? a : b;
	if (sum_i < 0)
		return (NULL);

	sum = malloc(sizeof(*sum) * ((++sum_i) + 2));
	if (!sum)
		return (NULL);

	sum[sum_i + 1] = '\0';
	sum[0] = '0';
	while (a >= 0 || b >= 0 || byt_sum > 0)
	{
		if (a >= 0)
		{
			byt_sum += (n1[a] - '0');
			--a;
		}

		if (b >= 0)
		{
			byt_sum += (n2[b] - '0');
			--b;
		}

		sum[sum_i] = (byt_sum % 10) + '0';
		byt_sum /= 10;
		--sum_i;
	}

	return (sum);
}

/**
 *_strlen - calculates length of a string
 *@s: the string
 *
 *Return: length of the string
 */
ssize_t _strlen(char *s)
{
	ssize_t cnt;

	for (cnt = 0; s[cnt]; cnt++)
		;

	return (cnt);
}

/**
 * _strspn - checks the first occurence of a sub-string in a string
 * @s: string to be checked
 * @accept: sub-string to check
 *
 * Return: the length of the first occurences
 */
size_t _strspn(char *s, char *accept)
{
	size_t i, j, a = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
			if (accept[j] == s[i])
				break;

		if (accept[j])
			a++;
		else
			break;
	}

	return (a);
}

/**
 * _memset - fills a memory with a constant byte.
 * @buffer: pointer to the buffer
 * @ch: ASCII of the character to be used
 * @n: number of times the character will be repeated
 *
 * Return: pointer to the string
 */
void *_memset(void *buffer, int ch, size_t n)
{
	size_t i = 0;

	for (i = 0; i < n; i++)
		*((char *)buffer + i) = (char)ch;

	return (buffer);
}

/**
 * pad_char - calculates length of initial padding characters in a string
 * @str: the string to check
 * @ch: the character
 *
 * Return: number of padding characters
 */
size_t pad_char(char *str, char *ch)
{
	size_t zeros = 0, len = 0;

	if (str)
	{
		len = _strlen(str);
		zeros = _strspn(str, ch);
		if (len && (zeros == len))
			zeros--;
	}

	return (zeros);
}
