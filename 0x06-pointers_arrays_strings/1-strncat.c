#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncat - String Concatnation
 * @dest: Destination
 * @src: Source
 * @n: Integer
 *
 * Return: Returns Destination
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
