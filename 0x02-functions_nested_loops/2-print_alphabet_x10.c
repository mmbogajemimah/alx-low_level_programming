#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets ten times
 *
 * Description: prints alphabets ten times with new lines
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j = j + 1;
		}
		_putchar('\n');
	}

}
