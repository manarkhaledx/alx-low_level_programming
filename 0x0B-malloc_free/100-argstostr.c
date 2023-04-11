#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @acx: int input
 * @avx: double pointer array
 * Return: 0
 */
char *argstostrx(int acx, char **avx)
{
	int ix, nx, rx = 0, lx = 0;
	char *strx;

	if (acx == 0 || avx == NULL)
		return (NULL);

	for (ix = 0; ix < acx; ix++)
	{
		for (nx = 0; avx[ix][nx]; nx++)
			lx++;
	}
	l += acx;

	strx = malloc(sizeof(char) * lx + 1);
	if (strx == NULL)
		return (NULL);
	for (ix = 0; ix < acx; ix++)
	{
	for (nx = 0; avx[ix][nx]; nx++)
	{
		strx[rx] = avx[ix][nx];
		rx++;
	}
	if (strx[rx] == '\0')
	{
		strx[rx++] = '\n';
	}
	}
	return (strx);
}
