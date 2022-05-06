#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a funcion that concatnates strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Returns concatnated string
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *str;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	else
	{
		len = (strlen(s1) + strlen(s2) + 1);
		str = (char *)malloc(sizeof(char) * len);

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; s1[i] != '\0'; i++)
			{
				str[i] = s1[i];
			}
			for (j = 0; s2[j] != '\0'; j++)
			{
				str[i] = s2[j];
				i++;
			}
		}
		str[i + 1] = '\0';
	}
	return (str);
	free(str);
}
