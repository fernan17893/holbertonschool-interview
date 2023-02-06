#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to head of list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
    listint_t *current, *next;

    current = list;
    next = list;
    while (current != NULL && next != NULL && next->next != NULL)
    {
        current = current->next;
        next = next->next->next;
        if (current == next)
            return (1);
    }
    return (0);
}