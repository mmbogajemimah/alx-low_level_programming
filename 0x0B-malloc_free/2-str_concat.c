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
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}
	else
	{
		len = (strlen(s1) + strlen(s2) + 1);
		str = malloc(sizeof(char) * len);

		if (str == NULL)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < (strlen(s1) + strlen(s2)); i++)
			{
				if (i < strlen(s1))
					str[i] = s1[i];
				else
					str[i] = s2[i - strlen(s1)]
			}
			str[i] = '\0';
		}
	}
	return (str);
	free(str);
}
