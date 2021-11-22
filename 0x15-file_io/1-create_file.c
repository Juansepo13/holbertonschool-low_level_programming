#include "main.h"

/**
 *create_file - Creates a file.
 *@filename: name of the file to create.
 *@text_content: A NULL terminated string to write to the file.
 *
 *Return: 1 on success or -1 on failure or filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int file, a, READVAL; /*READVAL = Read value */

	if (!filename)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600); /* open file */
	if (file < 0)
		return (-1);

	while (text_content && *(text_content + READVAL))
		READVAL++;
	a = write(file, text_content, READVAL);
	close(file);
	if (a < 0)
		return (-1);
	return (1);
}
