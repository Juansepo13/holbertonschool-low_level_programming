#ifndef _MAIN_H_
#define _MAIN_H_
#include <unistd.h>
#include <stdio.h>

int _putchar(char c);
/*Write a function that reads a text file and prints it to the POSIX standard*/
/*output.*/
ssize_t read_textfile(const char *filename, size_t letters);
/*Create a function that creates a file. */
int create_file(const char *filename, char *text_content);
/*Write a function that appends text at the end of a file.*/
int append_text_to_file(const char *filename, char *text_content);
/*  */

/*  */

/*  */

#endif
