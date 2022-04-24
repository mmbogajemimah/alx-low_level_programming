#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * leet - Switches letters in string
 * @c: String passed in function
 *
 * Return: returns string with switched strings
 */
char *leet(char *c)
{
	int i, j;
	char s1[] = "AEOLT";
	char s2[] = "aeolt";
	char s3[] = "43071";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (c[i] == s1[j] || c[i] == s2[j])
			{
				c[i] = s3[j];
				break;
			}
		}
	}
	return (c);
}
