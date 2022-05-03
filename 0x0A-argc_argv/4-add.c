#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - cheks the fuction.
 * @argc: couts the arguments passed to the function.
 * @argv: gives the value for the argument passed to the function.
 *
 * Return: Returns always success.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;
	int count;

	i = 0;
	sum = 0;
	count = 1;

	if (argc == 0)
	{
		printf("0\n");
	}

	while (count < argc)
	{
		for (i = 0; argv[count][i] != '\0'; i++)
		{
			if (!(isdigit(argv[count][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[count]);
		count = count + 1;
	}
	printf("%d\n", sum);
	return (0);
}
