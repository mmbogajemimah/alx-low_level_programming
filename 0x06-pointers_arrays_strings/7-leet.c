#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - Switches letters in string
 * @c: String passed in function
 *
 * Return: returns string with switched strings
 */
char *leet(char *c)
{
	unsigned int i;

	for (i = 0; i < strlen(c); i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
		{
			c[i] = '4';
		}
		else if (c[i] == 'e' || c[i] == 'E')
		{
			c[i] = '3';
		}
		else if (c[i] == 'o' || c[i] == 'O')
		{
			c[i] = '0';
		}
		else if (c[i] == 't' || c[i] == 'T')
		{
			c[i] = '7';
		}
		else if (c[i] == 'l' || c[i] == 'L')
		{
			c[i] = '1';
		}
		else
		{
			c[i] = c[i];
		}
	}
	return (c);
}
