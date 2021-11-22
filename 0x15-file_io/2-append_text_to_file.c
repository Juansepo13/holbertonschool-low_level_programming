#include "main.h"

/**
 *append_text_to_file - Function that appends text at the end of a file.
 *@filename: The name of the file.
 *@text_content:  The NULL terminated string to add at the end of the file.
 *
 *Return: 1 on success. If fails-NULL -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, RETVAL, a;

	file = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	a = 0;
	while (text_content[a] != '\0')
		a++;
	RETVAL = write(file, text_content, a);
	if (RETVAL == -1)
		return (-1);
	return (1);
}
