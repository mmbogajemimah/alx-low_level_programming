#include "main.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers in range 0 to 10
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
}
