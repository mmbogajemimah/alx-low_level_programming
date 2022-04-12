#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints alphabets 
 *
 * Description: prints each letter of the alphabet ending with a newline
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
