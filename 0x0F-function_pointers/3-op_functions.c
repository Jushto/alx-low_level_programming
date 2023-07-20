#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Return sum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Return differnce of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: differennce between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Return multiplications of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Return division of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Return modulus of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
