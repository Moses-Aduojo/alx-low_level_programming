#include "main.h"

/**
* factorial - compute the factorial of a given number
* @n: the number whose factorial is to be find
* Return: factorial of n
*/
int factorial(int n)
{
	int factoria_l = n;

	if (n == 1 || n == 1)
		return (1);
	if (n < 0)
		return (-1);

	factoria_l = factoria_l * factorial(n - 1);
	return (factoria_l);
}
