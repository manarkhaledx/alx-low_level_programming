#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character cx to stdout
 * @cx: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putcharx(char cx)
{
	return (write(1, &cx, 1));
}
