#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing' chars for
 * Return: A file content.
 */
char *create_buffer(char *file)
{
	char *temp;

	temp = malloc(sizeof(char) * 1024);

	if (temp == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (temp);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int m;

	m = close(fd);

	if (m == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy file content
 * @argc: file content
 * @argv: list of pointers
 * Return: 0
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int epic, dc, r, l;
	char *bf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bf = create_buffer(argv[2]);
	epic = open(argv[1], O_RDONLY);
	r = read(epic, bf, 1024);
	dc = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (epic == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bf);
			exit(98);
		}

		l = write(dc, bf, r);
		if (dc == -1 || l == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bf);
			exit(99);
		}

		r = read(epic, bf, 1024);
		dc = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(bf);
	close_file(epic);
	close_file(dc);

	return (0);
}
