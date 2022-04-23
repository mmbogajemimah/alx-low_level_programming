#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - copies up to n characters from the string pointed to, bysrctodest
 * @dest: Destination
 * @src: Source
 * @n: Integer length
 *
 * Return: Returns Destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
