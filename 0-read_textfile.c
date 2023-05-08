#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and print
 * @filename: text file
 * @letters: write letters
 * Return: write or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *tank;
	ssize_t temp;
	ssize_t zip;
	ssize_t p;

	temp = open(filename, O_RDONLY);
	if (temp == -1)
		return (0);
	tank = malloc(sizeof(char) * letters);
	p = read(temp, tank, letters);
	zip = write(STDOUT_FILENO, tank, p);

	free(tank);
	close(temp);
	return (zip);
}
