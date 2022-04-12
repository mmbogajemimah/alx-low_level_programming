#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit in a number
 * @n: Digit in the function
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = abs(n % 10);
	_putchar(m + '0');
	return (m);
}
