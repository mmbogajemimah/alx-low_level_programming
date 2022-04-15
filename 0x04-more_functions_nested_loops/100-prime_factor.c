#include <stdio.h>
#include "main.h"
int main (int n)
{
	int i = 2;
	n = 120;

	while (n != 1)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				printf("%d", i);
				n = n / i;
			}
		}
		i++;
	}
	printf("\n");
	return (0);
}
