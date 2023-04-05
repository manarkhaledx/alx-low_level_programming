
#include "main.h"

int actual_sqrt_recursion(int nk, int ik);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @nk: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int nk)
{
	if (nk < 0)
		return (-1);
	return (actual_sqrt_recursion(nk, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @nk: number to calculate the sqaure root of
 * @ik: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int nk, int ik)
{
	if (ik * ik > nk)
		return (-1);
	if (ik * ik == nk)
		return (ik);
	return (actual_sqrt_recursion(nk, ik + 1));
}

