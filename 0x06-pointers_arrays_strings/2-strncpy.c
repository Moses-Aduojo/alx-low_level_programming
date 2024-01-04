/**
 * _strncpy - copy string from src string to a destination string
 * @dest: pointer to destination string
 * @src: pointer to src string
 * @n: number of byte to be copied from src string
 * Return: pointer to dest copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*ptr++ = *src++;
	}

	while (i < n)
	{
		*ptr++ = '\0';
		i++;
	}

	return (dest);
}

