#include "main.h"

/**
 * leet - replaces specific characters with specific numbers
 * @c: string to do the transformation
 * Return: transformed string
 */
char *leet(char *c)
{
	char l1[] = "AEOLT";
	char l2[] = "aeolt";
	char l3[] = "43017";
	unsigned int i, j;

	for (i = 0; i < strlen(c); i++)
	{
		for (j = 0; j < 5; j++)
		{
			if ((c[i] == l1[j]) || (c[i] == l2[j]))
				c[i] = l3[j];
		}
	}

	return (c);
}
