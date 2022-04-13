#include <stdio.h>
#include <inttypes.h>

/**
 * main - program start point
 *
 * Return: 0 if successful
 */
int main(void)
{
	uintmax_t a = 1, b = 2, sum, n = 0;

	printf("%lu, %lu, ", a, b);

	while (n < 96)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (n != 95)
			printf("%lu, ", sum);
		else
			printf("%lu", sum);

		n++;
	}
	putchar('\n');
	return (0);
}
