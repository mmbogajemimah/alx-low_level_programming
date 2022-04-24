#include "main.h"
#include <string.h>
/**
 * leet - A function that replaces characters
 * @c: string replaced with characters
 *
 * Return: Returns Replaced string
 */
char *leet(char *c)
{
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";
	int i, j;

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
			}
			else
			{
				c[i] = c[i];
			}
		}
	}
	return (c);
}
