#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @strx: char
 * Return: 0
 */
char *_strdupx(char *strx)
{
	char *aaax;
	int ix, rx = 0;

	if (strx == NULL)
		return (NULL);
	ix = 0;
	while (str[ix] != '\0')
		ix++;

	aaax = malloc(sizeof(char) * (ix + 1));

	if (aaax == NULL)
		return (NULL);

	for (rx = 0; str[rx]; rx++)
		aaax[rx] = strx[rx];

	return (aaax);
}
