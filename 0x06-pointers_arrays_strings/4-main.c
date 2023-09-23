#include "main.h"

/**
 * print_array - prints an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
	int b[] = {
		234234, 64534, 77632, 8723451, 98987, 1345231, 98534597,
		23456789, 6235456, 41235416, 374578, 10435434, 89734567};
	print_array(b, sizeof(b) / sizeof(int));
	reverse_array(b, sizeof(b) / sizeof(int));
	print_array(b, sizeof(b) / sizeof(int));

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
