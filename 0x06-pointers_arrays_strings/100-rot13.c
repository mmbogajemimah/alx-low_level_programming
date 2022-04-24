#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rot13 - Rotates string by 13 positions
 * @c: String passed to function
 *
 * Return: Returns transformed string
 */

char *rot13(char *c)
{
        int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (c[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (c[i] == s1[j])
			{
				c[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (c);
}
