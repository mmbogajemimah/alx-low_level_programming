#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: The character to be checked
 *
 * Return: returns 1 if is alpha and 0 if is not alpha
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <='Z')
		return (1);
	else
		return (0);
}
