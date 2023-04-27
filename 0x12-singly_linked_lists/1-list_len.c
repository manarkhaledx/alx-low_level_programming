#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @VAR: pointer to the list_t list
 *
 * Return: number of elements in VAR
 */
size_t list_len(const list_t *VAR)
{
 size_t SIZE = 0;

 while (VAR)
 {
 SIZE++;
 VAR = VAR->next;
 }
 return (SIZE);
}


