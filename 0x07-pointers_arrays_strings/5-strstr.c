#include "main.h"
/**
 * _strstr - Entry point
 * @hay: input
 * @need: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *hay, char *need)
{
	for (; *hay != '\0'; hay++)
	{
		char *x = hay;
		char *h = need;

		while (*x == *h && *h != '\0')
		{
			x++;
			h++;
		}

		if (*h == '\0')
			return (hay);
	}

	return (0);
}

