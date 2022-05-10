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
	unsigned int s1_len, tot_len, i;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	tot_len = s1_len + n;

	s = malloc((tot_len + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < s1_len; i++)
		s[i] = s1[i];

	for (i = 0; i < n && s2[i]; i++)
		s[s1_len + i] = s2[i];

	s[tot_len] = '\0';
	return (s);
	free(s);
}
