#include <stdio.h>
#include "main.h"
/**
 * main - Starting point
 *
 * Return: returns 0 Always
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
