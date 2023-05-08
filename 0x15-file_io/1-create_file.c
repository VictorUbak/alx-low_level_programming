#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file - A function
 * @filename: file created
 * @text_content: file that contain text
 * Return: 1, -1
 */

int create_file(const char *filename, char *text_content)
{
	int ref;
	ssize_t temp_f;

	if (filename == NULL)
	return (-1);

	ref = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (ref == -1)
	return (-1);

	if (text_content != NULL)
	{
	temp_f = write(ref, text_content, strlen(text_content));

	if (temp_f == -1)
		{
		close(ref);
	return (-1);
		}
	}
	close(ref);
	return (1);
}
