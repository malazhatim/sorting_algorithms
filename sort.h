#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - douply linked list
 * @n : integer
 * @prev : prev elrment
 * @next : poibter to next element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);


void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void change(int *array, ssize_t x1, ssize_t x2);
int lomuto(int *array, ssize_t first, ssize_t last, size_t size);
void quikso(int *array, ssize_t first, ssize_t last, int size);
#endif
