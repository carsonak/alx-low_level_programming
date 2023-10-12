#include <stdio.h>

/***/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		return (2);
	}
	else
	{
		printf("");
	}

	return (0);
}
