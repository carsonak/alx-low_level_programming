#include "variadic_functions.h"

/**
 * print_all - prints according to specified format
 * @format: the formatter
 */
void print_all(const char *const format, ...)
{
	va_list set;
	unsigned long int a = 0, b;
	op_t ops[] = {
		{'c', print_c},
		{'i', print_i},
		{'s', print_s},
		{'f', print_f},
		{'\0', NULL}};

	va_start(set, format);
	while (format[a])
	{
		b = 0;
		while (ops[b].ch)
		{
			if (format[a] == ops[b].ch)
			{
				ops[b].f(set);
				if (format[a + 1])
					printf(", ");

				break;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
}

/**
 * print_c - prints a character
 * @set: argument from the main function
 */
void print_c(va_list set)
{
	printf("%c", va_arg(set, int));
	va_end(set);
}

/**
 * print_i - prints an integer
 * @set: argument from the main function
 */
void print_i(va_list set)
{
	printf("%i", va_arg(set, int));
	va_end(set);
}

/**
 * print_s - prints a string
 * @set: argument from the main function
 */
void print_s(va_list set)
{
	char *str = va_arg(set, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);

	va_end(set);
}

/**
 * print_f - prints a float
 * @set: argument from the main function
 */
void print_f(va_list set)
{
	printf("%f", va_arg(set, double));
	va_end(set);
}
