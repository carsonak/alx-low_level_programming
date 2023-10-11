#ifndef PRINT_NAME_H
#define PRINT_NAME_H

#include <stdio.h>
#include <string.h>
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_name(char *name, void (*f)(char *));

#endif /*PRINT_NAME_H*/
