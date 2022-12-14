#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_t -linked list
 * @head: pointer to pointer of head of list
 * @number: number inserted into list
 * Return: address of the new node, NULL if else
 *
 * Description: insert a number into a singly linked list
 */

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *new_node;
	listint_t *now_node;

    now_node = *head;
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
            return(NULL);

    if (new_node)
    {
        new_node->n = number;
        new_node->next = NULL;
        if (*head == NULL || (*head)->n >= new_node->n)
        {
        new_node->next = *head;
        *head = new_node;
        }
      else
		{
			while (now_node->next && now_node->next->n < new_node->n)
			{
				now_node = now_node->next;
			}
			new_node->next = now_node->next;
			now_node->next = new_node;
		}
		return (new_node);
	}
	return (NULL);
} 