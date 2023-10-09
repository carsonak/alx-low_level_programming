#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stddef.h>
void *malloc_checked(unsigned int b);

char *string_nconcat(char *s1, char *s2, unsigned int n);
char *_strncat(char *dest, char *src, int n);

void *_calloc(unsigned int nmemb, unsigned int size);
void *_memset(void *str, int b, size_t n, size_t size);

int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /*ENDIF*/
