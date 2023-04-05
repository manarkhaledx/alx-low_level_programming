#include "main.h"

/**
 * _pow_recursion - returns the value of xk raised to the power of yk
 * @xk: value to raise
 * @yk: power
 *
 * Return: result of the power
 */
int _pow_recursion(int xk, int yk)
{
	if (yk < 0)
		return (-1);
	if (yk == 0)
		return (1);
	return (xk * _pow_recursion(xk, yk - 1));
}
