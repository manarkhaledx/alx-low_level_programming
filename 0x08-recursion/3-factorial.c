#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @nk: number to return the factorial from
 *
 * Return: factorial of nk
 */
int factorial(int nk)
{
	if (nk < 0)
		return (-1);
	if (nk == 0)
		return (1);
	return (nk * factorial(nk - 1));
}
