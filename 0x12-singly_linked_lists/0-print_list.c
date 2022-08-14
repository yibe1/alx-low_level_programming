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

int print_list(const list_t *h){

list_t *node;
int i=0;
node = h;
do{
printf("[%d] ",node->len);
printf("%s",node->str);
node = node->next;
printf("\n");
i++;
}while(node !=NULL);
return i;
}
/*int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    int n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
*/
