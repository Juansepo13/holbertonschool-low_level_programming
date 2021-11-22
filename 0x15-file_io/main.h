#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

#include <sys/types.h> /* header shall include definitions for at least the*/
/*following types, blkcnt_t, clock_t,fsblkcnt_t,pthread_barrier_t*/
#include <sys/stat.h> /*  header defines the structure of the data returned*/
/*by the functions fstat(), lstat(), and stat().*/
#include <fcntl.h> /*  header shall define the following requests and */
/*arguments for use by the functions fcntl() and open().*/
#include <unistd.h>

#define BUFFER_SIZE 1024


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
