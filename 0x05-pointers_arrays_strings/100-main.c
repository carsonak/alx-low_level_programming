#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int nb;

	nb = _atoi("98");
	printf("%ld\n", nb);
	nb = _atoi("-402");
	printf("%ld\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%ld\n", nb);
	nb = _atoi("214748364");
	printf("%ld\n", nb);
	nb = _atoi("0");
	printf("%ld\n", nb);
	nb = _atoi("Suite 402");
	printf("%ld\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%ld\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%ld\n", nb);
	nb = _atoi("-2147483648");
	printf("%ld\n", nb);
	nb = _atoi("2147483647");
	printf("%ld\n", nb);
	return (0);
}
