#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	char *s = NULL;
	unsigned char *r = malloc(9);

	s = "cisfun";
	printf("%s\n%lu\n\n", s, hash_djb2((unsigned char *)s));
	s = "Don't forget to tweet today";
	printf("%s\n%lu\n\n", s, hash_djb2((unsigned char *)s));
	s = "98";
	printf("%s\n%lu\n\n", s, hash_djb2((unsigned char *)s));
	s = NULL;
	printf("%s\n%lu\n\n", s, hash_djb2((unsigned char *)s));
	s = "A";
	printf("%s\n%lu\n\n", s, hash_djb2((unsigned char *)s));

	r[0] = 'A';
	r[1] = 'A';
	printf("%s\n%lu\n\n", r, hash_djb2(r));
	return (EXIT_SUCCESS);
}
