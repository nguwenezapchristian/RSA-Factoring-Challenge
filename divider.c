#include "rsa.h"

/**
 * divider - finds a number which can divide a number with 0 remainder
 * @a: a number
 * @i: current divisor
 * Return: a number which can divide 'a' with 0 remainder
 */

unsigned long long int divider(unsigned long long int a, unsigned long long int i)
{
	if (i * i > a)
	{
		return (a);
	}
	else if (a % i == 0)
	{
		return (i);
	}
	else
	{
		return divider(a, i + 1);
	}
}
