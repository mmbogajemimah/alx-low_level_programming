#include <unistd.h>

/**
 * putchar - writes the character c to stdoutput
 * @c: The character to print
 *
 * Return: On success 1
 * on error, -1 is returned and error nno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
