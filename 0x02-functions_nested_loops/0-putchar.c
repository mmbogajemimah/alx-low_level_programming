#include <stdio.h>
#include "main.h"
/**
 * main - Starting point
 *
 * Return: Returns 0
 */
int main(void)
{
	int i = 0;

	char str[] = "_putchar";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
