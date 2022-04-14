#include <stdio.h>
#include "main.h"
/**
 * main - startinng point
 *
 * Return: returns 0 when program is successful
 */
int main(void)
{
	int i;
	char str[] = "Fizz";
	char str2[] = "Buzz";
	char str3[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", str3);
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", str);
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", str2);
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
