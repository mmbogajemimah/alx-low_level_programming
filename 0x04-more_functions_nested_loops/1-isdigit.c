#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Function that checks if the input is a digit
 * @c: Input provided to the function
 *
 * Return: Returns 1 if isdigit and 0 if not digit
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
