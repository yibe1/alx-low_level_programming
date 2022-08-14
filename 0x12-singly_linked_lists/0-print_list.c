#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * print_list - traverse and print linked list contents
 * @h:a starting head of a linked list
 *
 * Description: a function that traverses through singly linked list
 * Return: the size of the linked list
 */

int print_list(const list_t *h)
{
const list_t *node;
int i = 0;
node = h;
while (node != NULL)
{
char *str = node->str;
printf("[%d] ", node->len);
printf("%s", str);
node = node->next;
printf("\n");
i++;
}
return (i);
}
