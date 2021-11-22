#include "main.h"

/**
 *read_textfile - Function reads a text file and prints it to the POSIX
 * the standar function.
 *@letters:  letters to print.
 *@filename: Name of the file to read.
 *
 *Return: Return count.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open, file_read, file_write;
	char *buffer;

	if (filename)
	{
		file_open = open(filename, O_RDWR); /* abrir archivo */

		if (file_open == -1)
		{
			return (0);
		}

		buffer = malloc(sizeof(char) * letters); /* alloc memory space*/

		if (buffer == NULL)
		{
			return (0);
		}

		file_read = read(file_open, buffer, letters);
		if (file_read == -1)
		{
			free(buffer);
			return (0);
		}
		close(file_open);

		file_write = write(STDOUT_FILENO, buffer, file_read);

		if (file_read != file_write)
		{
			return (0);
		}
		free(buffer);

		return (file_write);
	}
	return (0);
}
