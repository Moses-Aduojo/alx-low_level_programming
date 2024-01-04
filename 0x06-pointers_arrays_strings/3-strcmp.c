/**
* _strcmp - compare two string s1 and s2
* @s1: first string
* @s2: second string
* Return: -1, 0 or 1 if s1 is less than, matched or greater s2 respectively
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (0);
}
