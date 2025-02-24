#include <stdio.h>
/**
 * main - Prints all combinations of two digit decimals with no repetition
 *
 * Return: (0) if sucessful
 */
int main(void)
{
	int ei, zw;/*Initialise 1st and 2nd digit*/
	/*Increment 1st from 0-8*/
	for (ei = 0; ei < 9; ei++)
	{
		/*Increment 2nd from 1-9, 2nd is always one digit ahead of 1st*/
		for (zw = ei + 1; zw <= 9; zw++)
		{
			putchar(ei + '0');/*Print 1st*/
			putchar(zw + '0');/*Print 2nd*/
			/*Check if both numbers have reached thair max values*/
			if (ei == 8 && zw == 9)
				break;
			putchar(',');/*Print ","*/
			putchar(' ');/*Print " "*/
		}
	}

	putchar('\n');
	return (0);
}
