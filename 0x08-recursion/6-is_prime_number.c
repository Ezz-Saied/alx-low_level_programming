#include "main.h"
/**
* is_prime_number - checks if number is prime or not
* @n: first operand
*
* Return: 0 or 1
*/
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	help_prime(n, n / 2, 2);
}
/**
* help_prime - checks if number is prime or not
* @n: first operand
* @s: second operand
* @i: third operand
*
* Return: 0 or 1
*/
int help_prime(int n, int s, int i)
{
	if (n % i == 0)
		return (0);
	if (i >= s)
		return (1);
	return (help_prime(n, s, i + 1));
}
