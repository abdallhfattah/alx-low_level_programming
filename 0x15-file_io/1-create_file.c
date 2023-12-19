#include "main.h"

/**
 * _strlen - len of string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int l = 0;

	if (!s)
		return (l);
	while (*s++)
		l++;
	return (l);
}

/**
 * create_file - function creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: int
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int text_len = _strlen(text_content);
	ssize_t bytes_read = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_len)
		bytes_read = write(fd, text_content, text_len);
	close(fd);
	return (bytes_read == text_len ? 1 : -1);
}
