#include "main.h"

/**
 * append_text_to_file - A function that appends text
 * @filename: text content
 * @text_content: text
 * Return: 1 if file exist, -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, buf, zoo = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (zoo = 0; text_content[zoo];)
			zoo++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	buf = write(fd, text_content, zoo);

	if (fd == -1 || buf == -1)
		return (-1);

	close(fd);

	return (1);
}
