/**
* _strncat - concatenate n byte from src string to dest string
* @dest: pointer to destination string
* @src: pointer to src string
* @n: number of byte from src string
*/

char *_strncat(char *dest, char *src, int n)
{
	char *prt = dest;
	int i;

	while(*prt != '\0')
		prt++;
	i = 0;
	while (*src != '\0' && i < n)
	{
		*prt++ = *src++;
		i++;
	}
	*prt = '\0';
	return (dest);
}
