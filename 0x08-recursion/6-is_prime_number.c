#include "main.h"

int actual_prime(int nk, int ik);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @nk: number to evaluate
 *
 * Return: 1 if nk is a prime number, 0 if not
 */
int is_prime_number(int nk)
{
	if (nk <= 1)
		return (0);
	return (actual_prime(nk, nk - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @nk: number to evaluate
 * @ik: iterator
 *
 * Return: 1 if nk is prime, 0 if not
 */
int actual_prime(int nk, int ik)
{
	if (ik == 1)
		return (1);
	if (nk % ik == 0 && ik > 0)
		return (0);
	return (actual_prime(nk, ik - 1));
}

