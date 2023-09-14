#include <stdio.h>

/**
 *main - Prints lowercase Alhabets except for q and e
 *
 *Return: (0) if sucessful
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		/*if ((i != 'e') || (i != 'q'))*/
		if (!(i == 'e' || i == 'q'))
		{
			putchar(i);
		}
	}
	putchar(10);

	return (0);
}
