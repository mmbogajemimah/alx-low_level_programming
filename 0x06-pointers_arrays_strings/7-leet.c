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

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (c);
}
