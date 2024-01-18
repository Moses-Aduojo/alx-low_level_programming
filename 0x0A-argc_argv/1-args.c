#include <stdio.h>

/**
 * main - print number of argument this program recieve
 * @argc: number of arguement
 * @argv: pointer to arrays of argument
 * Return: 0 on success and 1 otherwise
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
