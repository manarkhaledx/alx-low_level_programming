#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1k: pointer to string params
 * @s2k: pointer to string params
 * Return: 0
 */

int wildcmp(char *s1k, char *s2k)
{
	if (*s1k == '\0')
	{
		if (*s2k != '\0' && *s2k == '*')
		{
			return (wildcmp(s1k, s2k + 1));
		}
		return (*s2k == '\0');
	}

	if (*s2k == '*')
	{
		return (wildcmp(s1k + 1, s2k) || wildcmp(s1k, s2k + 1));
	}
	else if (*s1k == *s2k)
	{
		return (wildcmp(s1k + 1, s2k + 1));
	}
	return (0);
}

