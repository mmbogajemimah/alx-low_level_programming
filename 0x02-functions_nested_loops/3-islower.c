#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _islower - checks is a character is lower
 *@c: The character to be checked
 *
 * Return: returns 1 if islower and 0 if is upper
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
