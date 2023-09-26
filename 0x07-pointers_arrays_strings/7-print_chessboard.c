#include "main.h"

/**
 *print_chessboard - prints a chessboard
 *@a: array of a chess board layout
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 8; i >= 0; i--)
	{
		(*a)[8]--;
	}

	for (i = 7; i >= 0; i--)
	{
		for (j = 7; j >= 0; j--)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
