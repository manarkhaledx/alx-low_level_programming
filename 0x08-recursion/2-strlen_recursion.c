#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @sk: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *sk)
{
	int longit = 0;

	if (*sk)
	{
		longit++;
		longit += _strlen_recursion(sk + 1);
	}

	return (longit);
}
