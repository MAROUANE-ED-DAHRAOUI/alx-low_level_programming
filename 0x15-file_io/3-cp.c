#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 1 on success 0 on failure
 */
int main(int ac, char **av)
{
	int fr_fc = 0, fr = 0;
	ssize_t b;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fr_fc = open(av[1], O_RDONLY);
	if (fr_fc == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	fr = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fr == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);

	while ((b = read(fr_fc, buffer, READ_BUF_SIZE)) > 0)
		if (write(fr, buffer, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);

	fr_fc = close(fr_fc);
	fr = close(fr);
	if (fr_fc)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fr_fc), exit(100);
	if (fr)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fr_fc), exit(100);

	return (EXIT_SUCCESS);
}
