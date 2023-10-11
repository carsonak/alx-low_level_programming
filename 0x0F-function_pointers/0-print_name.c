#include "print_name.h"

/**
 * print_name - calls a function to print a name.
 * @name: String to be printed
 * @f: function to be used to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
