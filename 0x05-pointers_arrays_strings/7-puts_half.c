#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * puts_half - Prints character on the left half of a string
 * @str: string input in function
 *
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int length;
	int mid;
	int i;

	length = strlen(str);
	if (length % 2 == 0)
		mid = length / 2;
	else
		mid = (length - 1) / 2;
	for (i = mid; i <= length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
