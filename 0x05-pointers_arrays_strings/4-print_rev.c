#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Function prints reversed strings
 * @s: string Reversed by the function
 *
 * Return: Returns Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
