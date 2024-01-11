#include "main.h"

/**
 * sqrt_finder - helper function for _sqrt_recursion function
 * @n: number to find the square root of
 * @i: an iterator incremented until it becomes the square root
 * Return: natural square root of n, or -1 if n does not have
 * a natural square root
 */
int sqrt_finder(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_finder(n, i + 1));
}

/**
 * _sqrt_recursion - compute natural square root of a given number
 * @n: number whose natural square root is to be found.
 * Return: natural square root if the given number has otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_finder(n, 1));
}

