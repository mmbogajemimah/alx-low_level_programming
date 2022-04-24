#include "main.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - Capitalizes first word in a string
 * @c: pointer of string
 *
 * Return: Returns capitalized string
 */
char *cap_string(char *c)
{
	unsigned int i, j;
	char sep[] = " \n\t,;.!?\"(){}";

	for (i = 0; i < strlen(c); i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
			}
		}
		else if (i != 0)
		{
			for (j = 0; j < strlen(sep); j++)
			{
				if (c[i - 1] == sep[j])
				{
					if (c[i] >= 'a' && c[i] <= 'z')
					{
						c[i] = toupper(c[i]);
					}
				}
			}
		}
		else
		{
			c[i] = c[i];
		}
	}
	return (c);
}
