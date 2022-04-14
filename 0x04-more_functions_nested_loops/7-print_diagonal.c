#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - prints vertical line in form of a Triangle
 * @n: number of vertical lines printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
