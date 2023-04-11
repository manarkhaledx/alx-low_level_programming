#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @widthx: width input
 * @heightx: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_gridx(int widthx, int heightx)
{
	int **meex;
	int xx, yx;

	if (widthx <= 0 || heightx <= 0)
		return (NULL);

	meex = malloc(sizeof(int *) * heightx);

	if (meex == NULL)
		return (NULL);

	for (xx = 0; xx < heightx; xx++)
	{
		meex[xx] = malloc(sizeof(int) * widthx);

		if (meex[xx] == NULL)
		{
			for (; xx >= 0; xx--)
				free(mee[xx]);

			free(meex);
			return (NULL);
		}
	}

	for (xx = 0; xx < heightx; xx++)
	{
		for (yx = 0; yx < widthx; yx++)
			meex[xx][yx] = 0;
	}

	return (meex);
}
