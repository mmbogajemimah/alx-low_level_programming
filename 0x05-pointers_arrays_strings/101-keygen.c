#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * random_password - Generates a random password
 *
 * Return: Returns a random password
 */
int random_password(void)
{
	int num;

	srand(time(NULL));
	num = rand();
	return (num);
}
/**
 * main - starting point
 *
 * Return: Returns 0
 */
int main(void)
{
	random_password();

	return (0);
}
