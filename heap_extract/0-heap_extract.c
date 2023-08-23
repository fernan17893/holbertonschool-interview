#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"

/**
 * heap_extract - extracts the root node of a Max Binary Heap
 * 
 * @heap_t: pointer to the heap_t root node
 * @root: pointer to the heap_t root node
 * 
 * Return: value stored in the root node
 */


int heap_extract(heap_t **root)
{
    heap_t *node = NULL;
    int value = 0;

    if (!root || !*root)
        return (0);
    node = *root;
    value = node->n;
    while (node->left || node->right)
    {
        if (!node->right || node->left->n > node->right->n)
        {
            node->n = node->left->n;
            node = node->left;
        }
        else if (!node->left || node->left->n < node->right->n)
        {
            node->n = node->right->n;
            node = node->right;
        }
    }
    if (node->parent->left == node)
        node->parent->left = NULL;
    else
        node->parent->right = NULL;
    free(node);
    return (value);
}