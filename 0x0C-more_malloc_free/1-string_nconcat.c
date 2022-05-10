#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatnates two strings
 * @s1: string2
 * @s2: string2
 * @n: number of bytes
 *
 * Return: Returns sring
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int string1, string2, length, j, i;
	char *str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	string1 = strlen(s1) + 1;
	string2 = strlen(s2) + 1;
	length = string1 + string2;

	str = malloc((sizeof(char) * length));
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	if (n > string2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (j = 0; s2[j] != '\0'; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	else if (n < string2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			str[i] = s1[i];
		for (j = 0; j < n; j++)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i + 1] = '\0';
	return (str);
	free(str);
}
