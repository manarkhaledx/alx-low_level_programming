#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @sizex: size of array
 * @cx: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_arrayx(unsigned int sizex, char cx)
{
	char *strx;
	unsigned int ix;

	strx = malloc(sizeof(char) * sizex);
	if (sizex == 0 || strx == NULL)
		return (NULL);

	for (ix = 0; ix < sizex; ix++)
		str[ix] = cx;
	return (strx);
}
