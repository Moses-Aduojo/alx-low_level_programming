#include "variadic_functions.h"
#define IF_NULL(x) do { if ((x) == NULL) return; } while (0)

/**
 * print_all - function that prints anything
 * @format: pointer to the list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	char *str;

	IF_NULL(format);
	va_start(ap, format);
	i = 0;
	while (format[i] != '\0')
	{
		if (i > 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("%s", "(nil)");
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
