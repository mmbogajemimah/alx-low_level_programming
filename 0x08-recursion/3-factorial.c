#include "main.h"
/**
 * factorial - returns the factorial of int n
 * @n: integer argument
 *
 * Return: returns factorial int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
