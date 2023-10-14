#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char *const format, ...);

void print_c(va_list st);
void print_i(va_list st);
void print_s(va_list st);
void print_f(va_list st);

/**
 * struct op - Struct op
 *
 * @ch: The operator
 * @f: The function associated
 */
typedef struct op
{
	char ch;
	void (*f)(va_list set);
} op_t;

#endif /*VARIADIC_FUNCTIONS_H*/
