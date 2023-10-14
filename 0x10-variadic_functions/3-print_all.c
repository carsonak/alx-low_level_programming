#include "variadic_functions.h"

/**
 * print_all - prints according to specified format
 * @format: the formatter
 */
void print_all(const char *const format, ...)
{
	va_list set;
	unsigned long int i = 0, j;
	op_t ops[] = {
		{'c', print_c},
		{'i', print_i},
		{'s', print_s},
		{'f', print_f},
		{'\0', NULL}};

	va_start(set, format);
	while (format[i])
	{
		j = 0;
		while (ops[j].ch)
		{
			if (format[i] == ops[j].ch)
			{
				ops[i].f(set);
				break;
			}
			j++;
		}
		i++;
		if (i < strlen(format))
			printf(", ");
	}

	va_end(set);
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
	switch (*str)
	{
	case str == NULL:
		printf("(nil)");
		break;

	default:
		printf("%s", va_arg(set, char *));
		break;
	}

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
