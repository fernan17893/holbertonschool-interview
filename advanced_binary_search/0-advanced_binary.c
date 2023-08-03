#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */

int advanced_binary(int *array, size_t size, int value)
{
    int i = 0;
    int last = size - 1;
    int mid = (i + last) / 2;

    if (array == NULL)
        return (-1);

    while (i <= last) {
        if (array[mid] < value)
            i = mid + 1;
        else if (array[mid] == value)
            return (mid);
        else
            last = mid - 1;
        mid = (i + last) / 2;
    }
    return (-1);
}