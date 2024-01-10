#include "main.h"
/**
* _memset - fills the first n bytes of the memory area pointed
* to by s with the constant byte b
* @s: pointer to area to be filled
* @b constant by b to be used
* @n: number of memory area to be used
* Return:  a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int i = 0;

	while (*ptr != '\0')
	{
		i++;
		ptr++;
	}
	if (n > i || n == 0)
	{
		;
	}


	for (ptr -= i, i = 0; i < n; i++, ptr++)
	{
		*ptr = b;
	}
	return (s);
}
