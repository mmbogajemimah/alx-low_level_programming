#include <unistd.h>

/**
 * putchar - writes the character c to stdoutput
 * @c: The character to print
 *
 * Return: Onn success 1
 * On error, -1 is returned and error no is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
