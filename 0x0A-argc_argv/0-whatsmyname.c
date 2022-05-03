#include "main.h"
#include <string.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Returns 0 if program is successful
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
	{
		int i = 0;
		int len = 0;

		len = strlen(argv[0]);

		for (i = 0; i < len; i++)
		{
			_putchar(argv[0][i]);
		}
		_putchar('\n');
	}
	return (0);
}
