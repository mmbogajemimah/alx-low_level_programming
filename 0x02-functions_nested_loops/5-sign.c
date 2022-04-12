#include <stdio.h>
#include "main.h"
/**
 * print_sign - prints signs of the int nn
 * @n: Integer sign is checked
 *
 * Return: returns 0, 1 and -1 depending on int sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
