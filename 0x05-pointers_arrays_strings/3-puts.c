#include "main.h"
#include <string.h>

/**
 * _puts - Function that prints out a string
 *  @str: string that is printed out by the function
 *
 *  Return: returns nothing
 */
void _puts(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
