#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @xx: input
 * @s: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *xx, int s)
{
	int m1, m2, y;

	m1 = 0;
	m2 = 0;

	for (y = 0; y < s; y++)
	{
		m1 = m1 + xx[y * s + y];
	}

	for (y = s - 1; y >= 0; y--)
	{
		m2 += xx[y * s + (s - y - 1)];
	}

	printf("%d, %d\n", m1, m2);
}

