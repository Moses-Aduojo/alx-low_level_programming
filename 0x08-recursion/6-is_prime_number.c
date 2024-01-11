#include "main.h"

/**
 * find_factor - find factor of a given number
 * @n: the number whose factor is find
 * @i: iterator incremented until it is found or not to be factor of n
 * Return: 0 if a factor is found, 1 otherwise
 */
int find_factor(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	i += 1;
	return (find_factor(n, i));
}

/**
 * is_prime_number - check if a given number is prime or not
 * @n: the given number
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (find_factor(n, 2));
}
