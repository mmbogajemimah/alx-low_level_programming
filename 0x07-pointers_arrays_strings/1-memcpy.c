#include "main.h"
#include <string.h>
/**
 * _memcpy - copies a block of memory from a location to another
 * @dest: Where array will be copied to
 * @src: string to be copied
 * @n: The number of characters to copy
 *
 * Return: Returns the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
