#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - Prints out the numbers divisible by two
 * @str: String input in the function
 *
 * Return: returns nothing
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
