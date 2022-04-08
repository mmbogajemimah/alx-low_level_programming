#include <stdio.h>
/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; j++)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');

			if (i == 8 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}