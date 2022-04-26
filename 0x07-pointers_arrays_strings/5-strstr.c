#include "main.h"
#include <string.h>
/**
 * _strstr - Locates a substring
 * @haystack: string to be scannned
 * @needle: string containing the sequence of characters to match
 *
 * Return: Returnns a pointer ret
 */
char *_strstr(char *haystack, char *needle)
{
	char *ret;

	ret = strstr(haystack, needle);
	return (ret);
}
