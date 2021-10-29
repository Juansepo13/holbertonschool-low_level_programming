#ifndef MAIN_H
#define MAIN_H
/* Write a function that allocates memory using malloc. */
void *malloc_checked(unsigned int b);
/* Write a function that concatenates two strings. */
char *string_nconcat(char *s1, char *s2, unsigned int n);
/* Write a function that allocates memory for an array, using malloc */
void *_calloc(unsigned int nmemb, unsigned int size);
/* Write a function that creates an array of integers. */
int *array_range(int min, int max);
/* Write a function that reallocates a memory block using malloc and freeWrite a function that reallocates a memory block using malloc and free */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
