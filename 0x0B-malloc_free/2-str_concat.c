#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1x: input one to concat
 * @s2x: input two to concat
 * Return: concat of s1x and s2x
 */
char *str_concatx(char *s1x, char *s2x)
{
	char *conctx;
	int ix, cix;

	if (s1x == NULL)
		s1x = "";
	if (s2x == NULL)
		s2x = "";

	ix = cix = 0;
	while (s1x[ix] != '\0')
		ix++;
	while (s2x[cix] != '\0')
		cix++;
	conctx = malloc(sizeof(char) * (ix + cix + 1));

	if (conctx == NULL)
		return (NULL);
	ix = cix = 0;
	while (s1x[ix] != '\0')
	{
		conctx[ix] = s1x[ix];
		ix++;
	}

	while (s2x[cix] != '\0')
	{
		conct[ix] = s2x[cix];
		ix++, cix++;
	}
	conctx[ix] = '\0';
	return (conctx);
}
