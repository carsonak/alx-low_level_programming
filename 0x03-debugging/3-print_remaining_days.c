#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if (year % 4 == 0)
	{/*Checks for all leap years + centuries*/
		if (!(year % 100 == 0 && year % 400 != 0))
		{/*Checks whether the year is a century and not a leap year*/
			if (month > 2 && day >= 60)
			{
				day++;
			}
			/*printf("THIS IS A LEAP YEAR!\n\n");*/
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
		}
		else
		{
			if (month == 2 && day >= 60)
			{
				printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
			}
			else
			{
				/*printf("THIS IS NOT LEAP YEAR!\n\n");*/
				printf("Day of the year: %d\n", day);
				printf("Remaining days: %d\n", 365 - day);
			}
		}
	}
	else
	{
		if (month == 2 && day >= 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month,
			       day - 31, year);
		}
		else
		{
			/*printf("THIS IS NOT LEAP YEAR!\n\n");*/
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
