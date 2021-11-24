#include "main.h"

/**
 * main - Function
 * @argc: Numbers of character
 * @argv: Character
 * inff: File_from
 * ouft: File_to
 * rd: Read
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int inff, ouft;
	char buf[1024];
	ssize_t rd;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	inff = open(argv[1], O_RDONLY);
	if (inff == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98)
			;
	ouft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ouft == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((rd = read(inff, buf, 1024)) > 0)
	{
		if (write(ouft, buf, rd) != rd)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(inff) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inff);
		exit(100);
	}
	if (close(ouft) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ouft);
		exit(100);
	}
	return (0);
}
