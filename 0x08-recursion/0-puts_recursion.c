#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @sk: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *sk)
{
	if (*sk)
	{
		_putchar(*sk);
		_puts_recursion(sk + 1);
	}

	else
		_putchar('\n');
}
