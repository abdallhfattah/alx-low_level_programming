#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file name
 * @letters: number of letters it should read
 * Return: letters or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read;
	char buf[BUF_SIZE * 8];

	if (filename == NULL || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	letters_read = read(fd, &buf, letters);
	letters_read = write(STDOUT_FILENO, &buf, letters_read);

	close(fd);
	return (letters_read);
}
