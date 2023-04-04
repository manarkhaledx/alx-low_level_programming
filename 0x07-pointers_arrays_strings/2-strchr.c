#include "main.h"
/**
 * _strchr - Entry point
 * @inputt: input
 * @charr: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *inputt, char charr)
{
	int i = 0;

	for (; inputt[i] >= '\0'; i++)
	{
		if (inputt[i] == charr)
			return (&inputt[i]);
	}
	return (0);
}
