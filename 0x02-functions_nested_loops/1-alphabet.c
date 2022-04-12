#include <stdio.h>
#include "main.h"
/**
 * main - The main function of the program
 *
 * Return: return 0
 */

int main(void)
{
	int i = 0;

	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
