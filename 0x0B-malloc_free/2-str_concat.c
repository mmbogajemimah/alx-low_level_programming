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
	char *str = NULL;
	int i;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		len = strlen(s1) + strlen(s2);
		str = (char *)malloc(sizeof(char) * len);

		for (i = 0; s1[i] != '\0'; i++)
		{
			str[i] = s1[i];
		}

		for (j = 0; s2[j] != '\0'; j++, i++)
		{
			str[i] = s2[j];
		}
		str[i] = '\0';
	}
	return (str);
}
