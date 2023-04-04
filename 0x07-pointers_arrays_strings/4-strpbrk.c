#include "main.h"
/**
 * _strpbrk - Entry point
 * @si: input
 * @acc: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *si, char *acc)
{
		int f;

		while (*si)
		{
			for (f = 0; acc[f]; f++)
			{
			if (*si == acc[f])
			return (si);
			}
		si++;
		}

	return ('\0');
}

