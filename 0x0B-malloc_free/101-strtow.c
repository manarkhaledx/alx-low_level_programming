#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @sx: string to evaluate
 *
 * Return: number of words
 */
int count_wordx(char *sx)
{
	int flagx, cx, wx;

	flagx = 0;
	wx = 0;

	for (cx = 0; sx[cx] != '\0'; cx++)
	{
		if (sx[cx] == ' ')
			flagx = 0;
		else if (flagx == 0)
		{
			flagx = 1;
			wx++;
		}
	}

	return (wx);
}
/**
 * **strtow - splits a string into words
 * @strx: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtowx(char *strx)
{
	char **matrixx, *tmpx;
	int ix, kx = 0, lenx = 0, wordsx, cx = 0, startx, endx;

	while (*(strx + lenx))
		lenx++;
	words = count_wordx(strx);
	if (wordsx == 0)
		return (NULL);

	matrixx = (char **) malloc(sizeof(char *) * (wordsx + 1));
	if (matrixx == NULL)
		return (NULL);

	for (ix = 0; ix <= lenx; ix++)
	{
		if (strx[ix] == ' ' || strx[ix] == '\0')
		{
			if (cx)
			{
				endx = ix;
				tmpx = (char *) malloc(sizeof(char) * (cx+ 1));
				if (tmpx == NULL)
					return (NULL);
				while (startx < endx)
					*tmpx++ = strx[startx++];
				*tmpx = '\0';
				matrixx[kx] = tmpx - cx;
				kx++;
				cx = 0;
			}
		}
		else if (cx++ == 0)
			startx = i;
	}

	matrixx[kx] = NULL;

	return (matrixx);
}
