#include "main.h"

/**
* _pow_recursion - compute the value of x raised to power y
* @x: given base
* @y: given power
* Return: value of x raised to the power of y
*/
int _pow_recursion(int x, int y)
{
	int i = y;
	int value = x;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (i < 1)
		return (value);

	value = value * _pow_recursion(x, i - 1);
	return (value);
}
