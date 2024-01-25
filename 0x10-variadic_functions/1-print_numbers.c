#include "variadic_functions.h"

/**
 * print_numbers - print numerical paramenter recieved separated by a separator
 * @separator: used to separate the numbers
 * @n: numbers of numeric paramenter to be printed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int y;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		y = va_arg(ap, int);
		printf("%d%s", y, (separator != NULL && i < n - 1) ? separator : "");
	}
	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
