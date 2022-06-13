#ifndef SEARCH
#define SEARCH

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int recursive_search(int *array, int left, int right, int value);

#endif
