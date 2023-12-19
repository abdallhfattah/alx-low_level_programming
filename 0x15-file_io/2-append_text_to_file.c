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
 * append_text_to_file - appneds text at end of file
 * @filename: file name
 * @text_content: content
 * Return: int
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_wrote = 0;
	int text_len = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_len)
		bytes_wrote = write(fd, text_content, text_len);
	close(fd);

	return (bytes_wrote == text_len ? 1 : -1);
}
