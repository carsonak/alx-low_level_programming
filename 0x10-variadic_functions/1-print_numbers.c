#include "variadic_functions.h"

/**
 * print_numbers - prints a list of given numbers
 * @separator: separator between the numbers
 * @n: number of arguments passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i < n && !(separator == NULL))
			printf("%s", separator);
	}
	va_end(nums);
	putchar('\n');
}
