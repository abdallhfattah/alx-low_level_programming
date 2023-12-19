#include "main.h"

#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define ERR_NOWRITE "Error: Can't write to %s\n"

/**
 * main - program copies file to another file
 * @argc: args count
 * @argv: args vector
 * Return: 1 or 0
 */

int main(int argc, char **argv)
{
	int fd1, fd2;
	ssize_t bytes;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((bytes = read(fd1, buf, BUF_SIZE)) > 0)
		if (write(fd2, buf, bytes) != bytes)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd1 = close(fd1), fd2 = close(fd2);
	if (fd1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}

	if (fd2)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (EXIT_SUCCESS);
}
