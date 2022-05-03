#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - starting point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: returns 0 when program is successful
 */
int main(int argc, char *argv[])
{
	int mult = 1;
	int j = 1;

	if ((argc - 1) != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (j = 1; j < argc; j++)
		{
			mult = mult * atoi(argv[j]);
		}
		printf("%d\n", mult);
	}
	return (0);
}
