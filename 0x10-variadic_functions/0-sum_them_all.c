#include <stdarg.h>

/**
 * sum_them_all - sum all of argument
 * @n: number of argument it recieve
 * Return: sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);
	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);


}
