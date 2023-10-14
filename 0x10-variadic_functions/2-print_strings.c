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

	va_start(wrds, n);
	for (i = 1; i <= n; i++)
	{
		printf("%s", va_arg(wrds, char *));
		if (i < n && !(separator == NULL))
			printf("%s", separator);
		else if (i < n && separator == NULL)
			printf("(nil)");
	}
	va_end(wrds);
	putchar('\n');
}
