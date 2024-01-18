#include <stdio.h>

/**
 * main - print all argument this program recieve
 * @argc: number of argument it recieve
 * @argv: pointer to array of argument
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
