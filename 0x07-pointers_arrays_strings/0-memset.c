#include "main.h"
char *_memset(char *xx, char yt, unsigned int num)
{
	int j = 0;

	for (; num > 0; j++)
	{
		xx[j] = yt;
		num--;
	}
	return (xx);
}
