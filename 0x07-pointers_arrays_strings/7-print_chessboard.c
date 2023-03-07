#include "main.h"

/**
 * print_chessboard - This function print an 8x8 chessboard
 * @a: Specifications of the chessboard
 * Return: Nothing
 */

print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_puchar(a[i][j]);
		}
		_putchar ('\n');
	}
}