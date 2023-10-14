#include "variadic_functions.h"

/**
 * print_all - prints according to specified format
 * @format: the formatter
 */
void print_all(const char *const format, ...)
{
	va_list set;
	unsigned long int a = 0, b;
	f_prt ids[] = {
		{'c', print_c},
		{'i', print_i},
		{'s', print_s},
		{'f', print_f},
		{'\0', NULL}};

	va_start(set, format);
	while (format[a])
	{
		b = 0;
		while (ids[b].ch)
		{
			if (format[a] == ids[b].ch)
			{
				ids[b].f(set);
				switch (format[a + 1])
				{
				case '\0':
					break;

				default:
					printf(", ");
					break;
				}
				break;
			}
			b++;
		}
		a++;
	}
	va_end(set);
	putchar('\n');
}

/**
 * print_c - prints a character
 * @set: argument from the main function
 */
void print_c(va_list set)
{
	printf("%c", va_arg(set, int));
}

/**
 * print_i - prints an integer
 * @set: argument from the main function
 */
void print_i(va_list set)
{
	printf("%i", va_arg(set, int));
}

/**
 * print_s - prints a string
 * @set: argument from the main function
 */
void print_s(va_list set)
{
	char *str = va_arg(set, char *);

	if (!(str))
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}

/**
 * print_f - prints a float
 * @set: argument from the main function
 */
void print_f(va_list set)
{
	printf("%f", va_arg(set, double));
}

#ifdef SWITCH_
switch (format[i])
{
case 'c':
	ch = va_arg(args, int);
	printf("%c", asdf);
	break;
case 'i':
	num = va_arg(args, int);
	printf("%d", asdf);
	break;
case 's':
	str = va_arg(args, char *);
	printf("%f", asdf);
	break;
case 'f':
	num2 = va_arg(args, float);
	printf("%f", asdf);
	break;

default:
	break;
}
#endif
