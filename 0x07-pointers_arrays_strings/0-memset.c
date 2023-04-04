#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @sa: starting address of memory to be filled
 * @buffer: the desired value
 * @num: number of bytes to be changed
 *
 * Return: changed array with new value for num bytes
 */
char *_memset(char *sa, char buffer, unsigned int num)
{
	int j = 0;

	for (; num > 0; j++)
	{
		sa[j] = buffer;
		num--;
	}
	return (sa);
}

