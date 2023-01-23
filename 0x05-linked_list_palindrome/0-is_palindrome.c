#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_palindrome - Check if the linked list is a palindrome
 * @head: Type listint_s double pointer of node
 * Return: 1 if is a palindrome 0 otherwise
 */

int is_palindrome(listint_t **head)
{
    listint_t *current = *head;
    int i = 0, j = 0, array[1000000];

    if (*head == NULL)
        return (1);
    while (current != NULL)
    {
        array[i] = current->n;
        current = current->next;
        i++;
    }
    i--;
    while (i > j)
    {
        if (array[i] != array[j])
            return (0);
        i--;
        j++;
    }
    return (1);
}