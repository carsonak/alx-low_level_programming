#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int _putchar(char c);
void _puts_recursion(char *s);

void _print_rev_recursion(char *s);
void get_reverse(char *str, int len);

int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);
int look_sqrt(int b, int div);

int is_prime_number(int n);
int least_div(int b, int div);

#endif /*ENDIF*/
