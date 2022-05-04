#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_two(int cents);
/**
 * main - starting point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Returns 0 if program is successful
 */
int main(int argc, char *argv[])
{
	int cents;
	int quarters;
	int dimes;
	int nickels;
	int two;
	int pennies;
	int coins;
	int pennies_counter;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}

	quarters = calculate_quarters(cents);
	cents = cents - quarters * 25;

	dimes = calculate_dimes(cents);
	cents = cents - dimes * 10;

	nickels = calculate_nickels(cents);
	cents = cents - nickels * 5;

	two = calculate_two(cents);
	cents = cents - two * 2;

	pennies_counter = 0;
	do {
		if (cents >= 1)
		{
			cents = cents - 1;
			pennies_counter++;
		}
	} while (cents >= 1);

	pennies = pennies_counter;
	cents = cents - pennies * 1;

	coins = quarters + dimes + nickels + two + pennies;
	printf("%i\n", coins);
	return (0);
}
/**
 * calculate_quarters - calculates no of quarters
 * @cents: input
 *
 * Return: Number of Quarters
 */
int calculate_quarters(int cents)
{
	int quarter_counter = 0;

	do {
		if (cents >= 25)
		{
			cents = cents - 25;
			quarter_counter++;
		}
	} while (cents >= 25);
	return (quarter_counter);
}
/**
 * calculate_dimes - calculates the no of dimes
 * @cents: input
 *
 * Return: Number of dimes
 */
int calculate_dimes(int cents)
{
	int dimes_counter = 0;

	do {
		if (cents >= 10)
		{
			cents = cents - 10;
			dimes_counter++;
		}
	} while (cents >= 10);
	return (dimes_counter);
}
/**
 * calculate_nickels - calculates the no of nickels
 * @cents: input
 *
 * Return: Number of nickels
 */
int calculate_nickels(int cents)
{
	int nickels_counter = 0;

	do {
		if (cents >= 5)
		{
			cents = cents - 5;
			nickels_counter++;
		}
	} while (cents >= 5);
	return (nickels_counter);
}
/**
 * calculate_two - calculates the no of twos
 * @cents: input
 *
 * Return: Number of twos
 */
int calculate_two(int cents)
{
	int two_counter = 0;

	do {
		if (cents >= 2)
		{
			cents = cents - 2;
			two_counter++;
		}
	} while (cents >= 2);
	return (two_counter);
}

