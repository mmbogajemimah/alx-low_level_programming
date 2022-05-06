#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int len, len2;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		len = len + strlen(av[i]);
	}
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		free(str);
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len2 = strlen(av[i]);
		for (j = 0; j < len2; j++)
		{
			str[i] = av[i][j];
		}
		printf("\n");
	}
	return (str);
	free(str);
}
