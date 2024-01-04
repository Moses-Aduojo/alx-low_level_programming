/**
 * _strncpy - copy string from src string to a destination string
 * @dest: pointer to destination string
 * @src: pointer to src string
 * @n: number of bytes to be copied from src string
 * Return: pointer to dest copy
 */

char *_strncpy(char *dest, char *src, int n)
{
        char *ptr = dest;
        int i = 0;

        while (*src++ && i < n)
        {
                *ptr = *src;
                ptr++;
                i++;
        }

        *ptr = '\0';

        return dest;
}

