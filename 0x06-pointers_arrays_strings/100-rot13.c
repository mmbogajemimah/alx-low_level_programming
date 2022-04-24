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
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
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
