#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints name
 * @name: name input
 * @f: pointer to function
 *
 * Return: Returns Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || (*f) == NULL)
	{
		return;
	}
	else
	{
		(*f)(name);
	}
}
