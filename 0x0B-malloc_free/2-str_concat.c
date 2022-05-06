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
	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		return (strcat(s1, s2));
	}
}
