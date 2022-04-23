#include "main.h"
#include <string.h>
/**
 * cap_string - capitalizes first words of string
 * @c: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *c)
{
	char sep[] = " \n\t,;.!?\"(){}";
	unsigned int i, j;

	for (i = 0; i < strlen(c); i++)
	{
		for (j = 0; j < strlen(sep); j++)
		{
			if (c[i] == sep[j])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				{
					c[i + 1] = c[i + 1] - 32;
				}
			}
		}
	}

	return (c);
}
