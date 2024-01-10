#include "main.h"

/**
* _memcpy - copy memory area from src buffer to destination buffer
* @dest: pointer to destination buffer
* @src: pointer to source buffer
* @n: number of byte to copy from src bufer to destination  buffer
* Return: pointer to destination buffer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i;

	for (i = n; i > 0; i--)
	{
		*ptr++ = *src++;
	}
	return (dest);
}
