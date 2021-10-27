#ifndef MAIN_H
#define MAIN_H
/* Write a function that creates an array of chars, and initializes it with a specific char. */
char *create_array(unsigned int size, char c);
/* Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter */
char *_strdup(char *str);
/* Write a function that concatenates two strings */
char *str_concat(char *s1, char *s2);
/* Write a function that returns a pointer to a 2 dimensional array of integers. */
int **alloc_grid(int width, int height);
/* Write a function that frees a 2 dimensional grid previously created by your alloc_grid function. */
void free_grid(int **grid, int height);

#endif
