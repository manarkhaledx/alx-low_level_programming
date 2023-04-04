#include "main.h"
/**
 * _strspn - Entry point
 * @xr: input
 * @acc: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *xr, char *acc)
{
	unsigned int num = 0;
	int i;

	while (*xr)
	{
		for (i = 0; acc[i]; i++)
		{
			if (*xr == acc[i])
			{
				num++;
				break;
			}
			else if (acc[i + 1] == '\0')
				return (num);
		}
		xr++;
	}
	return (num);
}

