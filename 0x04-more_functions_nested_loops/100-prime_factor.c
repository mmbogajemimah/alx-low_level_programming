#include <stdio.h>
#include <math.h>
#include <stdint.h>

/**
 * max_prime_factor - calculate largest prime factor of number
 * @n: number to calculate
 * Return: the largest factor
 */
long max_prime_factor(int64_t n)
{
	long i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}

	while (n % 3 == 0)
	{
		max = 3;
		n = n / 3;
	}

	for (i = 5; i <= sqrt(n); i = i + 6)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}

		while (n % (i + 2) == 0)
		{
			max = i + 2;
			n = n / (i + 2);
		}
	}

	if (n > 4)
	{
		max = n;
	}

	return (max);
}

/**
 * main - calculate largest prime factor of number
 * Return: 0
 */
int main(void)
{
	int64_t n = 612852475143;

	printf("%ld\n", max_prime_factor(n));
	return (0);
}
