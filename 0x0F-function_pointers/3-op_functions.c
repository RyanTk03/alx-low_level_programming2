#include "3-calc.h"

/**
 * add - returns the sum of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: Sum of a and b
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - returns the difference of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: Difference of a and b
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - returns the product of a and b.
 * @a: The first integer
 * @b: The second integer
 * Return: Product of a and b
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - returns the result of the division of a by b.
 * @a: The first integer
 * @b: The second integer
 * Return: Result of a divided by b
 */
int div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 * mod - returns the remainder of the division of a by b.
 * @a: The first integer
 * @b: The second integer
 * Return: Remainder of a divided by b
 */
int mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
