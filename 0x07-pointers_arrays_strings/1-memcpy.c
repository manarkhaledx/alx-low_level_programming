#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@mem: memory where is stored
 *@mcp: memory where is copied
 *@num: number of bytes
 *
 *Return: copied memory with n bytes changed
 */
char *_memcpy(char *mem, char *mcp, unsigned int num)
{
	int f = 0;
	int b = num;

	for (; f < b; f++)
	{
		mem[f] = mcp[f];
		num--;
	}
	return (mem);
}
