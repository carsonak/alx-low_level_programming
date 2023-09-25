#include "main.h"

/**
 *print_chessboard - prints a chessboard
 *@a: array of a chess board layout
 */

void print_chessboard(char (*a)[8])
{
	int i, j, rows, cols;

	/*rows = sizeof(a) / sizeof(a[0]);*/
	/*cols = sizeof(a[0]);*/
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
