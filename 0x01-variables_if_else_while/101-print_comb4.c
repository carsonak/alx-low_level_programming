#include <stdio.h>

/**
 * main - Prints all combinations of three digit decimals with no repetition
 *
 * Return: (0) if successful
 */
int main(void)
{
	int ei, zw, dr;/*Initialise 1st and 2nd digit*/

	for (ei = 0; ei < 8; ei++)/*Increment 1st from 0-7*/
	{
		/*Increment 2nd from value of 1st to 9*/
		for (zw = ei + 1; zw < 9; zw++)
		{
			/*Increment 3rd from value of 2nd to 9*/
			for (dr = zw + 1; dr <= 9; dr++)
			{
				/*Check if any of the numbers match with each other*/
				if (ei != zw || ei != dr || zw != dr)
				{
					putchar(ei + '0');/*Print 1st*/
					putchar(zw + '0');/*Print 2nd*/
					putchar(dr + '0');/*Print 3rd*/
				}
				/*Check if the numbers have reached thair max all together*/
				if (ei == 7 && zw == 8 && dr == 9)
				{
					break;
				}
				putchar(',');/*Print ","*/
				putchar(' ');/*Print " "*/
			}
		}
	}

	putchar('\n');
	return (0);
}
