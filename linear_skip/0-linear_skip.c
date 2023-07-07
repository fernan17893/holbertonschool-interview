#include <stdio.h>
#include <stdlib.h>

#include "search.h"


skiplist_t *linear_skip(skiplist_t *list, int value){
    skiplist_t *temp = list;
    skiplist_t *temp2 = list;
    int i = 0;
    int j = 0;

    if (list == NULL)
        return (NULL);
    while (temp->express != NULL && temp->n < value){
        temp = temp->express;
        printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
        i = temp->index;
    }
    if (temp->express == NULL){
        temp2 = temp;
        while (temp2->next != NULL)
            temp2 = temp2->next;
        printf("Value found between indexes [%d] and [%d]\n", i, (int)temp2->index);
        printf("Value checked at index [%lu] = [%d]\n", temp2->index, temp2->n);
    }
    else{
        printf("Value found between indexes [%d] and [%lu]\n", i, temp->index);
        printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
    }
    while (temp->next != NULL && temp->n < value){
        temp = temp->next;
        printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
        j = temp->index;
    }
    if (temp->n == value){
        printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
        return (temp);
    }
    else{
        printf("Value found between indexes [%d] and [%d]\n", i, j);
        printf("Value checked at index [%lu] = [%d]\n", temp->index, temp->n);
        return (NULL);
    }
}