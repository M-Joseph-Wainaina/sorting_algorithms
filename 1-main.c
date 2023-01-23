#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;

    int array[] = {2264, 944, 5760, 6599, 4199, 2124, 1389, 9932, 1856, 426, 9438, 2857, 2523, 8807, 9077, 4397, 718, 5174, 6099, 4201, 8151, 6822, 1945, 5526, 4241, 8744, 2754, 7386, 7472, 6672, 1939, 9172, 4996, 7190, 3486, 1334, 1317, 5300, 8858, 44, 6819, 2183, 6973, 2342, 5727, 7954, 7606, 7613, 8142, 8225, 8954, 9203, 705, 8398, 231, 9780, 1462, 7192, 8909, 7779, 6572, 1512, 9695, 1922, 2295, 4556, 9402, 2454, 8975, 9538, 6301, 9813, 8213, 3057, 1129, 4991, 4169, 9555, 9492, 9713, 3801, 8554, 7880, 4543, 1480, 1172, 2403, 2834, 3519, 354, 9773, 7947, 2018, 7879, 9856, 3080, 843, 1194, 9720, 2289};

    size_t n = sizeof(array) / sizeof(array[0]);
    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}
