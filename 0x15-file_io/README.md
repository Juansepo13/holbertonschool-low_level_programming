# 0x15. C - File I/O
***
## This is a README.md for the repository 0x15. C - File I/O
```
For Holberton School
Cohort 16.
```
### General
General
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

### More Info
Read or watch:

* [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
* [C Programming in Linux Tutorial #024 - open() read() write() Functions man or help:](https://www.youtube.com/watch?v=dP3N8g7h8gY)
* [Macros](https://gcc.gnu.org/onlinedocs/gcc-3.1.1/cpp/Object-like-Macros.html)
* open.
* close.
* read.
* write.
* dprintf.
* The prototypes of all your functions and the prototype of the function
 _putchar should be included in your header file called main.h.

```
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
    dprintf(2, "Usage: %s filename\n", av[0]);
    exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}

```

## Files included

| File                 | Details                                    |
|--------------------- | ------------------------------------------ |
| [0-read_textfile.c](https://github.com/Juansepo13/holbertonschool-low_level_programming/blob/main/0x15-file_io/0-read_textfile.c) | Write a function that reads a text file and prints it to the POSIX standard output.|
| [1-create_file.c](./b) | Create a function that creates a file.     |
| [2-append_text_to_file.c](./c) | Write a function that appends text at the end of file|
| [3-cp.c](./d) | Write a program that copies the content of a file to another file. Usage: cp file_from file_to.|
| [](./)  |	       |
| [](./)  |	       |

### Author
***
*Holberton School Student*

Juan Sebastian Posada  - [Github](https://github.com/Juansepo13) - [Twiter](https://twitter.com/@JuanSeb35904130)
