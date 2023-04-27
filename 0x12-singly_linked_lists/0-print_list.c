#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @VAR: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *VAR)
{
 size_t s = 0;

 while (VAR)
 {
 if (!VAR->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", VAR->len, VAR->str);
 VAR = VAR->next;
 s++;
 }

 return (s);
}


