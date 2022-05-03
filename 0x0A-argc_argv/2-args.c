#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Returns 0 when program is successful
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int len = 0;
	int size = argc;

	for (i = 0; i < size; i++)
	{
		len = strlen(argv[i]);

		for (j = 0; j < len; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}
