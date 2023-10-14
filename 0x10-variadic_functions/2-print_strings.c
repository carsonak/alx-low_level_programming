#include "variadic_functions.h"

/**
 * print_strings - prints strings given with a separator between them
 * @separator: separator between the strings
 * @n: number of arguments passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list wrds;
	unsigned int i;
	char *str;

	va_start(wrds, n);
	for (i = 1; i <= n; i++)
	{
		str = va_arg(wrds, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n && !(separator == NULL))
			printf("%s", separator);
	}
	va_end(wrds);
	putchar('\n');
}
