#ifndef _SORT_H_
#define _SORT_H_

/*define of std header files*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/*0-bubble_sort.c*/
void bubble_sort(int *array, size_t size);

/*1-insertion_sort_list.c*/
void insertion_sort_list(listint_t **list);

/*print array*/
void print_array(const int *array, size_t size);
#endif /*sort.h*/