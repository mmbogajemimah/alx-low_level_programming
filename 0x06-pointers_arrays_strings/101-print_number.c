#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: value to be printed
 */

void print_number(int n)
{
	int k, l;

	if (n > -10 && n < 10)
	{
		if (n < 0)
		{
			_putchar('-');
			_putchar(-n % 10 + '0');
		}
		else
			_putchar(n % 10 + '0');
	}

	else
	{
		k = n / 10;

		if (n < 0)
			l = n % 10 * -1;
		else
			l = n % 10;

		putchar_many(k);
		_putchar(l + '0');
	}
}

/**
 * putchar_many - function that prints using putchar
 * @n: value to be printed using putchar
 */
void putchar_many(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		putchar_many(n / 10);

	_putchar(n % 10 + '0');
}
