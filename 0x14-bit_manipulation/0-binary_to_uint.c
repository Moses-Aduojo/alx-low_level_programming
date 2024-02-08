#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointer to the binary string
 * Return: converted number or zero if any char in b is not 0 or 1 or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_value = 0;
	int i;
	int base_power = 1;
	char s;

	if (b == NULL)
		return (0);
	i = strlen(b);
	while (i > 0)
	{
		s = b[i - 1];
		if (s - '0' < 0 || s - '0' > 1)
			return (0);
		decimal_value += ((s - '0') * base_power);
		base_power *= 2;
		i--;
	}
	return (decimal_value);
}
