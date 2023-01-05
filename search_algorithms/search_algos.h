#ifndef SEARCH_H
#define SEARCH_H

/* LIBRARIES */
#include <stddef.h>
#include <stdio.h>

/* PROTOTYPES */
int linear_search(int *array, size_t size, int value);
int binarySearch(int *array, int value, size_t low, size_t high);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_H */
