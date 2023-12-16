#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
#include <unistd.h>
#include <ctype.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strncat(char *dest, char *src, int n);
char *_strcpy(char *dest, char *src);

void *_calloc(unsigned int nmemb, unsigned int size);
void *_memset(void *buffer, int ch, size_t n);

int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

char *infiX_mul(char *n1, char *n2);
char *infiX_add(char *n1, char *n2);
ssize_t _strlen(char *s);
size_t _strspn(char *s, char *accept);

#endif /*ENDIF*/
