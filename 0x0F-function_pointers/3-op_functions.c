#include "3-calc.h"

/**
 * op_add - Addition of ints
 * @a: Integer one
 * @b: Integer two
 *
 * Return: The sum of ints
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtraction of ints
 * @a: Int one
 * @b: Int two
 *
 * Return: Subtruction of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication of ints
 * @a: Int one
 * @b: Int two
 *
 * Return: Multiplication of ints
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divides int a by b
 * @a: Numerator
 * @b: Denominator
 * Return: Division result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Returns remainder of division
 * @a: Numerator
 * @b: Denominator
 * Return: Division remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
