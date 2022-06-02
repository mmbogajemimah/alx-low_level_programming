#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX stdout
 * @filename: text to read
 * @letters: number of letters to read and print
 * Return: Returns number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, result;
	char *str = malloc(letters * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	result = read(fd, str, letters);
	printf("%s", str);
	close(fd);

	free(str);
	return (result);
}
