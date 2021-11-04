#ifndef _FUNC_POINTERS_
#define _FUNC_POINTERS_
int _putchar(char c);
/* Write a function that prints a name */
void print_name(char *name, void (*f)(char *));
/* Write a function that executes a function given as a parameter on each element of an array. */
void array_iterator(int *array, size_t size, void (*action)(int));
/*  Write a function that searches for an integer. */
int int_index(int *array, int size, int (*cmp)(int));
int main(int argc, char *argv[])

#endif
