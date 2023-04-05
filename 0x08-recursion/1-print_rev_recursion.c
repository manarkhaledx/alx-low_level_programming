#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @sk: The string to be printed.
 */
void _print_rev_recursion(char *sk)
{
	if (*sk)
	{
		_print_rev_recursion(sk + 1);
		_putchar(*sk);
	}
}
