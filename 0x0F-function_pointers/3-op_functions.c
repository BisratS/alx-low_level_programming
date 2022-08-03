#include "3-calc.h"

/**
 * op_add - add two numbers
 * @a: num1
 * @b: num2
 *
 * Return: add
 *
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substruct two number
 * @a: num1
 * @b: num2
 *
 * Return: diffrence
 *
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: num1
 * @b: num2
 *
 * Return: multiplication
 *
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: num1
 * @b: num2
 *
 * Return: division
 *
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
 * op_mod - calculates the module of two numbers
 * @a: num1
 * @b:num2
 *
 * Return: remainder of the division
 *
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


