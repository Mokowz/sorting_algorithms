#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>

/*Comparison direction macros for bitonic sort*/
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumeration of boolean values
*/

typedef enum bool
{
	false = 0,
	true = 1
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

void bubble_sort(int *array, size_t size);

#endif