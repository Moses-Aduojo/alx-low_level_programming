/**
* string_toupper - change lower case in string to upper
* @string: pointer to the original string
* Return: pointer to the modified string
*/

char *string_toupper(char *string)
{
	char *str = string;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = 'A' + *str - 'a';
		}
		str++;
	}

	return (string);
}
