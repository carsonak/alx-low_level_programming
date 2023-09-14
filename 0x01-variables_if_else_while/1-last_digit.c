#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - generates a random number, then prints the last digit and checks
 *its value.
 *
 *Return: (0) if sucessful
 */
int main(void)
{
	int n, lstnm;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lstnm = n % 10;

	if (lstnm < 6 && lstnm > 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lstnm);
	}
	if (lstnm < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, lstnm);
	}
	else if (lstnm > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, lstnm);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, lstnm);
	}

	return (0);
}
