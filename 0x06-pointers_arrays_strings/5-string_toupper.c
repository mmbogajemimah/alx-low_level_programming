#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - Converts string to uppercase
 * @c: pointer
 *
 * Return: Returns string in capital letters
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		c[i] = toupper(c[i]);
	}
	return (c);
}
