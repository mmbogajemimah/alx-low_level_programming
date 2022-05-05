#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns pointer to string
 * @str: string input
 *
 * Return: returns duplicated string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		return (strdup(str));
	}
}
