#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*Comparison direction macros for bitonic sort*/
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of boolean values
 * @false: False
 * @true: True
*/

typedef enum bool
{
	false = 0,
	true
} bool;


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

void swap_integers(int *num1, int *num2);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);

void swap_nodes(listint_t **h, listint_t **node1, listint_t *node2);
void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

int partitize_array(int *array, size_t size, int left, int right);
void recursive_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
#endif
