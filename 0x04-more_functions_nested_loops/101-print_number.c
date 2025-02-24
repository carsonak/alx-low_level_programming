#include "main.h"
/**
 * print_number - prints the given number
 * @n: an integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num, div = 1;

	/*Turning -ve numbers to +ve*/
	if (n < 0)
	{
		num = -n;
		_putchar('-');
	}
	else
		num = n;

	/*Calculating the highest total value of num*/
	while (num / div > 9)
	{
		div *= 10;
	}
	/*Printing out the number from left to right*/
	while (div > 0)
	{
		_putchar('0' + (num / div));
		num %= div;
		div /= 10;
	}
}
