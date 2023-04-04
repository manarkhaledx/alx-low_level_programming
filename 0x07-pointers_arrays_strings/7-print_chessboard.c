#include "main.h"
/**
 * print_chessboard - Entry point
 * @arr: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*arr)[8])
{
	int k;
	int g;

	for (k = 0; k < 8; k++)
	{
		for (g = 0; g < 8; g++)
			_putchar(arr[k][g]);
		_putchar('\n');
	}
}

