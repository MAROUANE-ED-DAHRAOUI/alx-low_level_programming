#include "main.h"

/**
 * _strlen - return length of a string
 * @s: the string whose length to check
 *
 * Return: integer length for string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - creates a file
 * @filename: name file to create
 * @text_content: text to write
 *
 * Return: 1 on success 0 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fr;
	ssize_t byt = 0, lenght = _strlen(text_content);

	if (!filename)
		return (-1);
	fr = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fr == -1)
		return (-1);
	if (lenght)
		byt = write(fr, text_content, lenght);
	close(fr);
	return (byt == lenght ? 1 : -1);
}
