#include "main.h"

int check_pal(char *sk, int ik, int lenk);
int _strlen_recursion(char *sk);

/**
 * is_palindrome - checks if a string is a palindrome
 * @sk: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *sk)
{
	if (*sk == 0)
		return (1);
	return (check_pal(sk, 0, _strlen_recursion(sk)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @sk: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *sk)
{
	if (*sk == '\0')
		return (0);
	return (1 + _strlen_recursion(sk + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @sk: string to check
 * @ik: iterator
 * @lenk: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *sk, int ik, int lenk)
{
	if (*(sk + ik) != *(sk + lenk - 1))
		return (0);
	if (ik >= lenk)
		return (1);
	return (check_pal(sk, ik + 1, lenk - 1));
}

